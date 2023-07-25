#include <iostream>

float average(int a, int b);
void startGame();

int lowerB, upperB, guess;

int main() {
  startGame();
  bool end = false;

  while (!end) {
    char input;
    std::cout << "My Guess is: " << guess << '\n';

    do {
      std::cout << "Am I Right ? or is the number higher or lower? (h/l/r) : ";
      std::cin >> input;
    } while (input != 'h' && input != 'l' && input != 'r');

    switch (input) {
    case 'h':
      lowerB = guess + 1;
      guess = average(lowerB, upperB);
      break;

    case 'l':
      upperB = guess - 1;
      guess = average(upperB, lowerB);
      break;

    case 'r':
      do {
        std::cout << "That's great! Do you want to continue playing? (y/n) ";
        std::cin >> input;
      } while (input != 'y' && input != 'n');
      system("clear");

      if (input == 'y') {
        startGame();
      } else {
        end = true;
      }
      break;
    }

    if (lowerB > upperB) {
      std::cout << "There is no number left for me to guess!\n";
      std::cout << "The number to be guessed has to be between 1 and the "
                   "number you've given me.\n";
      end = true;
    }
  }
}

void startGame() {
  std::cout << "Welcome to GenieGuess!\n";
  std::cout << "Tell me the maximum number I can guess: ";
  std::cin >> upperB;

  while (!std::cin) {
    std::cin.clear();
    std::cin.ignore();
    std::cout << "Tell me the maximum number I can guess: ";
    std::cin >> upperB;
  }

  lowerB = 1;
  guess = average(lowerB, upperB);
}

float average(int a, int b) { return (a + b) / 2; }
