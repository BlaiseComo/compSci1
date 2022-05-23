#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    srand(time(NULL));

    int num = rand() % 10;
    int guess;
    bool isGuessed = false;
    int count = 0;

    while (!isGuessed) {

        cout << "Enter your guess 0 - 9: ";
        cin >> guess;

        if (guess == num) {

            isGuessed = true;
            cout << "Good job you got it!\n";
            count++;

        }

        else if (guess < num && guess >= 0 && guess < 10) {

            cout << "Guess again loser lol, too low\n";
            count++;

        }

        else if (guess > num && guess < 10 && guess >= 0) {

            cout << "Guess again loser lol, too high\n";
            count++;

        }

        else {

            cout << "Invalid Number\n";

        }

    }
    cout << "You got it in " << count << " tries!\n";

}