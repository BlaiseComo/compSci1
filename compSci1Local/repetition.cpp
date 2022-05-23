#include <iostream>

using namespace std;

int main() {

    int num = 33;

    while (num <= 126) {

        cout << num << "   " << static_cast<char>(num) << "\n";
        num++;

    }

}