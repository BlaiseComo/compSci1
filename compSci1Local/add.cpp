#include <iostream>

using namespace std;

int main() {

    int num = 1;
    int num2 = 0;

    while (num <= 100) {

        num2 += num;
        num++;

    }
    cout << num2 << "\n";

}