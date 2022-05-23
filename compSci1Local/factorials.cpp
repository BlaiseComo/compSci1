#include <iostream>

using namespace std;

int main() {

    int num;

    cout << "Input a number (1-20): ";
    cin >> num;

    long long x = 1;

    for (int i = num; i > 0; i--) {

        x *= i;

    }

    cout << x << "\n";
}