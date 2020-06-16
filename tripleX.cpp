#include <iostream>

void PrintIntroduction()
{
  std::cout << "You are a secret agent breaking into a secure server room...\n";
  std::cout << "You need to enter the correct codes to continue...\n\n";
}

void PlayGame()
{
  PrintIntroduction();

  const int CodeA = 4;
  const int CodeB = 3;
  const int CodeC = 2;

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
    std::cout << "\nYou Win!";
  }
  else
  {
    std::cout << "\nYou Lose!";
  }
}

int main()
{
  PlayGame();
  return 0;
}