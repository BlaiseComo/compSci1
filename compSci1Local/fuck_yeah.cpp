#include <iostream>

using namespace std;

string reverseDigit(int int1);

int main() {

    int main_num;

    cout << "Input number: ";
    cin >> main_num;

    cout << reverseDigit(main_num) << "\n";

}

string reverseDigit(int int1) {

    int num1 = 10;

    string oof = "";

    for (int i = 0; i < to_string(int1).length(); i++){

        string str3 = (to_string(int1 % num1))[i];

        oof.append(str3);

        num1 *= 10;

    }

    return oof;

}