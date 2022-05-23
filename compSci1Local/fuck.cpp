#include <iostream>
#include <string>

using namespace std;

int main() {

    int num;
    int num2 = 0;

    cout << "Please input number: ";
    cin >> num;

    for (int i = 0; i < to_string(num).length(); i++) {

        char num3 = to_string(num)[i];

        int num4 = num3 - '0';

        num2 += num4;

    }

    cout << num2 << "\n";

    


    
}