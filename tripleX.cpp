#include <iostream>

void PrintIntroduction(int Difficulty)
{
  std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty << " secure server room...\n";
  std::cout << "You need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
  PrintIntroduction(Difficulty);

  const int CodeA = rand();
  const int CodeB = rand();
  const int CodeC = rand();

  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;

  std::cout << "+ There are 3 numbers in the code";
  std::cout << "\n+ The codes add-up to: " << CodeSum;
  std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

  int GuessA, GuessB, GuessC;
  std::cin >> GuessA;
  std::cin >> GuessB;
  std::cin >> GuessC;

  int GuessSum = GuessA + GuessB + GuessC;
  int GuessProduct = GuessA * GuessB * GuessC;

  if (GuessSum == CodeSum && GuessProduct == CodeProduct)
  {
    std::cout << "\nYou Win! Get ready for the next level.";
    return true;
  }
  else
  {
    std::cout << "\nYou Lose! Please retry the level.";
    return false;
  }
}

int main()
{
  int LevelDifficulty = 1;
  const int FinalLevel = 15;

  while (LevelDifficulty <= FinalLevel)
  {
    bool bLevelComplete = PlayGame(LevelDifficulty);
    std::cin.clear();  // Clears any errors
    std::cin.ignore(); // Discards the buffer

    if (bLevelComplete)
    {
      ++LevelDifficulty;
    }
  }

  std::cout << "Congratulations on beating the game!\n";

  return 0;
}