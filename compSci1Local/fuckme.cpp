#include <iostream>

using namespace std;

int main() {

    int one = 0; int two = 0; int three = 0; int four = 0; int five = 0; int six = 0; int seven = 0; int eight = 0; int nine = 0; int zero = 0;
    int input_num;

    cout << "Input number: ";
    cin >> input_num;

    for (int i = 0; i < to_string(input_num).length(); i++) {

        char char1 = to_string(input_num)[i];

        int num2 = char1 - '0';

        switch (num2) {

            case 0:
                zero++;
                break;
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;
            case 7:
                seven++;
                break;
            case 8:
                eight++;
                break;
            case 9:
                nine++;
                break;

        }

    }

    cout << "0 = " << zero << "\n";
    cout << "1 = " << one << "\n";
    cout << "2 = " << two << "\n";
    cout << "3 = " << three << "\n";
    cout << "4 = " << four << "\n";
    cout << "5 = " << five << "\n";
    cout << "6 = " << six << "\n";
    cout << "7 = " << seven << "\n";
    cout << "8 = " << eight << "\n";
    cout << "9 = " << nine << "\n";



}