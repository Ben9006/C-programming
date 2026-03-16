#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    int secret, guess;
    int attempts = 0;

    // Set the random number generator
    srand(time(0));

    // Generate random number between 1 and 20
    secret = (rand() % 20) + 1;

    cout << "Welcome to the Number Guessing Game" << endl;
    cout << "I've picked a number between 1 and 20. Can you guess it?" << endl;

    // Loop until the user guesses correctly
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if(guess > secret) {
            cout << "Too high!" << endl;
        } else if(guess < secret) {
            cout << "Too low!" << endl;
        } else {
            cout << "Congratulations! You guessed the number correctly!" << endl;
        }
    } while(guess != secret);

    cout << "It took you " << attempts << " attempts." << endl;

    return 0;
}