#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGame() {
    int numberToGuess, playerGuess;
    char playAgain = 'y';
    
    srand(time(0)); // Seed the random number generator
    
    while (playAgain == 'y' || playAgain == 'Y') {
        numberToGuess = rand() % 300 + 1; // Random number between 1 and 1000
        
        cout << "I have a number between 1 and 1000.\n";
        cout << "Can you guess my number?\n";
        cout << "Please type your first guess.\n";
        
        while (true) {
            cin >> playerGuess;
            
            if (playerGuess < numberToGuess) {
                cout << "Too low. Try again.\n";
            } else if (playerGuess > numberToGuess) {
                cout << "Too high. Try again.\n";
            } else {
                cout << "Excellent! You guessed the number!\n";
                break;
            }
        }
        
        cout << "Would you like to play again (y or n)? ";
        cin >> playAgain;
    }
}

int main() {
    playGame();
    return 0;
}
