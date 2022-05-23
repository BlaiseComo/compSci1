#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string even_odd(long long num);

int main() {

long long num;

cout << "Please Enter Number: ";
cin >> num;

cout << even_odd(num) << "\n";

}

string even_odd(long long num) {

    int even = 0;
    int odd = 0;
    int zeros = 0;

    for (int i = 0; i < to_string(num).length(); i++) {

        if ((to_string(num)[i] - '0') == 0) {

            zeros++;

        }

        else if ((to_string(num)[i] - '0') % 2 == 0) {

            even++;

        }

        else {

            odd++;

        }



    }

    return "evens = " + to_string(even) + " odds = " + to_string(odd) + " zeros = " + to_string(zeros);


}

