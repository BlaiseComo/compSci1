// Blaise's Cipher Challenge Code

#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>
#include <utility>
#include <cctype>

using namespace std;

string scramble(string user_input);

int main() {

    ifstream inFile;

    inFile.open("unencryptedText.txt");

    

}

string scramble(string user_input) {

    srand((unsigned)time(0));

    char alphabet[26];

    for (int x = 97; x < 123; x++) {

        alphabet[x-97] = static_cast<char>(x);

    }

    char normal_alpha[26];

    for (int i = 0; i < 26; i++) {

        normal_alpha[i] = alphabet[i];

    }

    for (int y = 0; y < 25; y++) {

        int r = y + (rand() % (26-y));

        char temp = alphabet[y];

        alphabet[y] = alphabet[r];

        alphabet[r] = temp;

    }

    string final_string;

    for (int i = 0; i < user_input.length(); i++) {

        char user_input_2 = user_input[i];

        user_input_2 = tolower(user_input_2);

        if (user_input_2 == ' ') {

            final_string += " ";
        }

        for (int g = 0; g < 26; g++) {

            if (user_input_2 == normal_alpha[g]) {

                final_string += alphabet[g];

            }

        }

    }

    return final_string;

}
