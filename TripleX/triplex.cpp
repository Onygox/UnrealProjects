#include <iostream>
#include <ctime>

bool PlayGame(int Difficulty)
{
    //Declare code variables
    const int FirstCodeNumber = (rand()%Difficulty)+(Difficulty/2)+1;
    const int SecondCodeNumber = (rand()%Difficulty)+(Difficulty/2)+1;
    const int ThirdCodeNumber = (rand()%Difficulty)+(Difficulty/2)+1;

    const int CodeSum = FirstCodeNumber + SecondCodeNumber + ThirdCodeNumber;
    const int CodeProduct = FirstCodeNumber * SecondCodeNumber * ThirdCodeNumber;

    std::cout<<"There are three numbers in the code.\n";
    std::cout<<"The numbers add up to "<<CodeSum<<" and multiply to equal "<<CodeProduct<<".\n";
    std::cout<<"The code's difficulty level is currently "<<Difficulty<<".\n\n";

    int FirstPlayerGuess, SecondPlayerGuess, ThirdPlayerGuess;
    std::cin>>FirstPlayerGuess;
    std::cin>>SecondPlayerGuess;
    std::cin>>ThirdPlayerGuess;

    int GuessSum = FirstPlayerGuess + SecondPlayerGuess + ThirdPlayerGuess;
    int GuessProduct = FirstPlayerGuess * SecondPlayerGuess * ThirdPlayerGuess;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout<<"\nYou seem to have cracked the code! The apparatus opens, revealing...\n";
        return true;
    }
    else
    {
        std::cout<<"\nThe apparatus lies inert in your hands. Guess you should try again..."<<std::endl;
        return false;
    }
}

int main()
{

    //randomize seed
    srand(time(NULL));

    //Print intro messages to the console
    std::cout<<"\nYou find a unique apparatus while exploring an alien planet.\n";
    std::cout<<"It looks like a box with three number-like characters on it.\n";
    std::cout<<"Curiosity piqued, you try and input a code in order to open it.\n\n";
    
    int LevelDifficulty = 1;
    const int MaxDifficulty = 7;

    while(LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);

        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
            if (LevelDifficulty <= MaxDifficulty)
            {
                std::cout<<"...another similar apparatus with another, more difficult, three-number code.\n";
            } else
            {
                std::cout<<"...a D I A M O N D. Congratulations, you're rich!";
            }
        }
    }

    return 0;
}