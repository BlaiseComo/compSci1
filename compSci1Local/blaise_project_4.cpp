// Libraries are included that allow program to run
#include <iostream>
#include <string>
#include <cctype>

// Simplifies code
using namespace std;

// Declaration of the conversion function
string letter_converter(string letter_number);

// Main function
int main() {

    // Declaration of string that will be used to dtermine if the program should keep running
    string y_n_bool;

    // Declarationo of string that will hold the user input
    string letter_number_1;

    // User is prompted to enter the text that will be converted
    cout << "Please enter a phone number expressed in letters: ";
    getline(cin,letter_number_1);

    // The converted phone number is printed via calling of the conversion function
    cout << letter_converter(letter_number_1) << "\n";

    // Program asks if user would like to enter another number, answer is stored in y_n_bool variable
    cout << "Would you like to enter another number(y/n): ";
    cin >> y_n_bool;

    // Conditional statement that determines if program should keep running
    if (y_n_bool == "y") {

        // Do While loop to keep program running as long as user requests as much
        do {

            // Prompts user for text to be converted
            cout << "Please enter a phone number expressed in letters: ";
            // cin.ignore allows program to ignore whitespace from previous iteration
            cin.ignore(1000, '\n');
            getline(cin,letter_number_1);

            // The converted phone number is printed via calling of conversion function
            cout << letter_converter(letter_number_1) << "\n";

            // Program asks if user would like to enter another number, answer is stored in y_n_bool variable
            cout << "Would you like to enter another number(y/n): ";
            cin >> y_n_bool;

        }

        while (y_n_bool == "y");

    }

    // 0 is returned from main function
    return 0;
    
}

// Defining of the conversion function that takes the user given text as an input
string letter_converter(string letter_number) {

    // Declaration of string variable that will hold the converted number
    string final_num;

    // For loop that iterates through the user provided text
    for (int i = 0; i < letter_number.length(); i++) {

        // The letters in the text are converted to lowercase
        letter_number[i] = tolower(letter_number[i]);

        // Conditional statement checks to make sure that final_num variable never goes past 7 characters
        if (final_num.length() == 8) {

            break;

        }

        // If statement inputs a hyphen after 3 characters
        if (final_num.length() == 3) {

            final_num += "-";

        }

        // All conditional statments below check to see what characters match the current character in the iteration
        if (letter_number[i] == 'a' || letter_number[i] == 'b' || letter_number[i] == 'c') {

            // Specific number is added to final num depending on if the condition is true
            final_num += "2";

        }

        else if (letter_number[i] == 'd' || letter_number[i] == 'e' || letter_number[i] == 'f') {

            final_num += "3";

        }

        else if (letter_number[i] == 'g' || letter_number[i] == 'h' || letter_number[i] == 'i') {

            final_num += "4";

        }

        else if (letter_number[i] == 'j' || letter_number[i] == 'k' || letter_number[i] == 'l') {

            final_num += "5";

        }

        else if (letter_number[i] == 'm' || letter_number[i] == 'n' || letter_number[i] == 'o') {

            final_num += "6";

        }

        else if (letter_number[i] == 'p' || letter_number[i] == 'q' || letter_number[i] == 'r' || letter_number[i] == 's') {

            final_num += "7";

        }

        else if (letter_number[i] == 't' || letter_number[i] == 'u' || letter_number[i] == 'v') {

            final_num += "8";

        }

        else if (letter_number[i] == 'w' || letter_number[i] == 'x' || letter_number[i] == 'y' || letter_number[i] == 'z') {

            final_num += "9";

        }

        else if (letter_number[i] == 'o' || letter_number[i] == 'p' || letter_number[i] == 'e' || letter_number[i] == 'r') {

            final_num += "0";

        }

    }

    // Final num string is returned from this function to be used in the main function
    return final_num;

}