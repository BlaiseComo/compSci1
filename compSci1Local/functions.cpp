#include <iostream>
#include <string>

using namespace std;
int vowels(string str1);

int main() {

    string main_str;

    cout << "Input string: ";
    cin >> main_str;

    cout << "The number of vowels is " << vowels(main_str) << "\n";
    cout << "The number of conconants is " << (main_str.length() - vowels(main_str)) << "\n";

}

int vowels(string str1) {

    string vowels1 = "aeiou";

    int num = 0;

    for (int i = 0; i < str1.length(); i++) {

        for (int x = 0; x < vowels1.length(); x++) {

            if (str1[i] == vowels1[x]) {

                num++;

            }
        }

    }

    return num;

}

