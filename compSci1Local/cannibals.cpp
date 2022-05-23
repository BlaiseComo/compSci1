#include <iostream>

using namespace std;

int main() {

    int num;

    cout << "Input Positive Integer: ";
    cin >> num;
    
    int y = 0;

    for (int i = 0; i <= num; i++) {

        for (int x = 0; x <= num; x++) {

            if ((x * i) == num) {

                y++;

            }

        }

    }

    if (y > 2) {

        cout << "It is composite\n";

    }
    else {

        cout << "It is prime\n";

    }

}