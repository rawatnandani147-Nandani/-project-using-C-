#include <iostream>
using namespace std;

int main() {
    int secret = 5;
    int guesses;
    int gcount = 0;
    int glimit = 4;
    bool no_more_guesses = false;

    cout << "Building a guessing game" << endl;

    while (secret != guesses && !no_more_guesses) {
        if (gcount < glimit) {
            cout << "Tell your guess: ";
            cin >> guesses;
            gcount++;
        } else {
            no_more_guesses = true;
        }
    }

    if (no_more_guesses) {
        cout << "You Lose";
    } else {
        cout << "You Win";
    }

    return 0;
}



OUTPUT:-

Building a guessing game
Tell your guess: 4
Tell your guess: 5
You Win

=== Code Execution Successful ===