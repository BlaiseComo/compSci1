#include <iostream>
#include <string>

using namespace std;

int main() {

    int num;
    int fib_num = 0;
    int fib_num_2 = 1;
    int fib_num_3;
    int i = 0;

    cout << "Input number for Fibonacci sequence: ";
    cin >> num;

    cout << 1;

    while (i < num) {

        fib_num_3 = fib_num + fib_num_2;

        fib_num = fib_num_2;

        fib_num_2 = fib_num_3;

        cout << ", " << fib_num_2;
        

        i++;

    }
    cout << "\n";

}