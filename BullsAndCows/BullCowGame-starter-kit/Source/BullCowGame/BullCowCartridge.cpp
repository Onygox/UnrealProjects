// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"
#include "HiddenWordList.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    WordList = GetValidWords(Words);
    
    InitGame();
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    //if game is over, reset and initialize again so they can play again
    if (bGameOver)
    {
        InitGame();
    }
    else
    {
        ProcessGuess(Input);
    }
}

void UBullCowCartridge::InitGame()
{
    ClearScreen();

    //initialize hidden word with random function
    HiddenWord = WordList[FMath::RandRange(0, WordList.Num()-1)];
    //PrintLine(TEXT("%s"), *HiddenWord); //debug line

    //set lives
    Lives = HiddenWord.Len();

    //set tries
    Tries = 3;

    //intro to player
    PrintLine(TEXT("Welcome to Bull Cow Game..."));
    PrintLine(TEXT("Your goal is to guess a secret %i-letter\nisogram (word with no repeating letters)."), HiddenWord.Len());
    PrintLine(TEXT("Press Tab to begin or exit. Input some\ntext and press Enter to confirm."));
    PrintLine(TEXT("Hint: The hidden word contains a %c"), HiddenWord[FMath::RandRange(0,HiddenWord.Len()-1)]);

    //set game over to false
    bGameOver = false;
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Press enter to replay..."));
}

void UBullCowCartridge::ProcessGuess(const FString& Guess)
{

    /* 
    check length of word
    check if isogram
    if both are true, check if the input is equal to the hidden word
    otherwise, prompt to guess again, return to receive input screen
    */
    PrintLine(TEXT("Received input."));

    if (Guess == HiddenWord)
    {
        PrintLine(TEXT("Congratulations, you guessed the word!"));
        EndGame();
    }
    //if input is the wrong length, warn the player
    else if (Guess.Len() != HiddenWord.Len())
    {
        PrintLine(TEXT("'%s' does not have %i letters. Try again!"), *Guess, HiddenWord.Len());
        CheckTries();
    }
    else if (!IsIsogram(Guess)) {
        //check if input is an isogram
        PrintLine(TEXT("'%s' is not an isogram. Try again!"), *Guess);
        CheckTries();
    }
    else
    {
        PrintLine(TEXT("'%s' was not the hidden word."), *Guess);
        CheckLives();
        //show number of bulls and cows
        FBullCowCount TempCount = GetBullsAndCows(Guess);
        PrintLine(TEXT("You have %i bulls and %i cows."), TempCount.Bulls, TempCount.Cows);
    }
}

bool UBullCowCartridge::IsIsogram(const FString& Word) const
{
    //for each letter in the INPUT array
        //for each letter AFTER it
            //if they match, return false

    for(int32 Index = 0; Index < Word.Len(); Index++)
    {
        for(int32 Comparison = Index + 1; Comparison < Word.Len(); Comparison++)
        {
            if (Word[Index] == Word[Comparison])
            {
                return false;
            }
        }
    }

    return true;
}

//give them three tries to realize that they have to input a
//word with the same length as the isogram and a word with
//no repeating letters
void UBullCowCartridge::CheckTries()
{
    if (Tries > 0)
    {
        --Tries;

        if (Tries == 1)
        {
            PrintLine(TEXT("I'll ignore the next mistake you make, but after that, you'll lose a life if you don't input an isogram or %i-letter word."), HiddenWord.Len());
        }
        else if (Tries <= 0)
        {
            PrintLine(TEXT("Watch out! You'll start losing lives from mistakes like repeating letters or wrong-length words!"));
        }
        else
        {
            PrintLine(TEXT("I'll ignore the next %i mistakes you make, but after that, you'll lose a life if you don't input an isogram or %i-letter word."), Tries, HiddenWord.Len());
        }
    }
    else 
    {
        CheckLives();
    }
}

void UBullCowCartridge::CheckLives()
{
    //lose a life
    --Lives;
    //if lives are less or equal to zero, print loss message and reveal hidden word and prompt to try again
    if (Lives <= 0)
    {
        PrintLine(TEXT("You lost! You have no more lives.\nThe hidden word was '%s'."), *HiddenWord);
        EndGame();
    }
    else 
    //otherwise, print number of lives and return to "receive input" screen
    {
        PrintLine(TEXT("Try again! You have %i lives left."), Lives);
    }
}

TArray<FString> UBullCowCartridge::GetValidWords(const TArray<FString>& WordsToCheck) const
{
    TArray<FString> ValidWords;

    for (FString TempString : WordsToCheck)
    {
        if (TempString.Len() >= 4 && TempString.Len() <= 8 && IsIsogram(TempString))
        {
            ValidWords.Emplace(TempString);
        }
    }
    
    return ValidWords;
}

FBullCowCount UBullCowCartridge::GetBullsAndCows(const FString& Guess) const
{
    FBullCowCount BCCount;

    for(int32 GuessIndex = 0; GuessIndex < Guess.Len(); GuessIndex++)
    {
        if (Guess[GuessIndex] == HiddenWord[GuessIndex])
        {
            BCCount.Bulls++;
            continue;
        }
        for(int32 HiddenIndex = 0; HiddenIndex < HiddenWord.Len(); HiddenIndex++)
        {
            if (Guess[GuessIndex] == HiddenWord[HiddenIndex])
            {
                BCCount.Cows++;
                break;
            }
        }
    }

    return BCCount;
}