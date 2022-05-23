// Libraries used in this program are included
#include <iostream>
#include <iomanip>
#include <string>

// Namespace std is included to clean up the code
using namespace std;

// Main Function
int main() {

    // Numbers that will be obtained from user later are defined as double data types
    double num_1;
    double num_2;

    // Operater that will be obtained from the user later is defined as a character data type
    char operator_1;

    // String that will help determine whether the answer is a decimal or integer is defined and will be obtained from the user later
    string dec_float_1;

    // Program requests the first number for the calculation and saves it 
    cout << "Input first number: ";
    cin >> num_1;

    // Program requests the operator type and saves it 
    cout << "Input one of these four operators, - (subtraction), + (addition), / (division), * (multiplication): ";
    cin >> operator_1;

    // Program requests the second number and saves it 
    cout << "Input second number: ";
    cin >> num_2;

    // Program requests whether the user would like the answer as a decimal or integer
    cout << "Would you like your answer in integer or decimal form? (Input decimal or integer): ";
    cin >> dec_float_1;

    // Switch statement that matches the user given operator to one of the operaters below
    switch (operator_1) {

        // First case determines if user given operator matches +
        case '+':
            // Conditional Statement determines if answer should be decimal or integer
            if (dec_float_1 == "decimal") {
                // Cout statment outputs this answer if the output is a decimal using formatting functions 
                cout << num_1 << " " << operator_1 << " " << num_2 << " = " << fixed << showpoint << setprecision(4) << num_1 + num_2 << "\n";
                break;
            }
            // This runs if the answer is an integer
            else if (dec_float_1 == "integer") {
                // Answer is defined as an integer variable type
                int final_num = num_1 + num_2;
                // Cout statement outputs answer using above defined int variable
                cout << num_1 << " " << operator_1 << " " << num_2 << " = " << final_num << "\n";
                break;
            }

        case '-':
            if (dec_float_1 == "decimal") {
                cout << num_1 << " " << operator_1 << " " << num_2 << " = " << fixed << showpoint << setprecision(4) << num_1 - num_2 << "\n";
                break;
            }
            else if (dec_float_1 == "integer") {
                int final_num = num_1 - num_2;
                cout << num_1 << " " << operator_1 << " " << num_2 << " = " << final_num << "\n";
                break;
            }

        case '*':
            if (dec_float_1 == "decimal") {
                cout << num_1 << " " << operator_1 << " " << num_2 << " = " << fixed << showpoint << setprecision(4) << num_1 * num_2 << "\n";
                break;
            }
            else if (dec_float_1 == "integer") {
                int final_num = num_1 * num_2;
                cout << num_1 << " " << operator_1 << " " << num_2 << " = " << final_num << "\n";
                break;
            }

        case '/':
            // Conditional Statment checks to make sure there is no division of zero errors
            if (num_2 != 0) {
                if (dec_float_1 == "decimal") {
                    cout << num_1 << " " << operator_1 << " " << num_2 << " = " << fixed << showpoint << setprecision(4) << num_1 / num_2 << "\n";
                    break;
                }
                else if (dec_float_1 == "integer") {
                    int final_num = num_1 / num_2;
                    cout << num_1 << " " << operator_1 << " " << num_2 << " = " << final_num << "\n";
                    break;
                }
            }

            // If a divsion by zero error were to occur this statement gets printed insted
            else {
                cout << "Division by zero error!\n";
                break;
            }

        // If any user given values are invalid, this statement will be printed
        default:
            cout << "Invalid Input!\n";
            break;
    }

    // 0 is returned to the terminal
    return 0;
}