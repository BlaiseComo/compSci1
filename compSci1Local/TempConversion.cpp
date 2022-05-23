// Libraries to be used are included
#include <iostream>
#include <iomanip>
#include <string>

// Namespace std for convencience
using namespace std;

// Declaration of simple void functions so they can be used in Main
void showMenu();
void showCelcius(double fahrenheit);
void showKelvin(double fahrenheit);

// Main Function
int main() {

    cout << "\n";

    // This is a number that is added onto in the program and is used to tell if the user has reached their input limit
    int error_count = 0;
    
    // Array Index 1: Fahrenheit
    // Array Index 2: Celcius
    // Array Index 3: Kelvin

    double values[3][10];

    // This is a number that keeps track of how many times the while loop has iterated, it is really only used to make the program more user friendly
    int count = 0;

    // This is an important number that keeps track of how many times the array has been appended too
    int array_count = -1;

    // This is an integer that represents the users choice from the menu of options
    int collected_num;

    // Menu is shown using the showMenu function
    showMenu();

    // The collected_num is collected from the user
    cout << "\nInput the number of desired output: ";
    cin >> collected_num;

    // Do while loop to keep the program going until the user wants to quit or there is an invalid input
    do {

        cout << "\n";

        // A value of 1 is added to count
        count++;

        // Switch statement of options in the menu
        switch (collected_num) {

            // This is executed if the user wants to convert Fahrenheit to Celcius
            case 1:

                // This conditional Statement checks to make sure there are less than ten values in the array
                if (error_count >= 10) {

                    cout << "Error: Too Many Temperatures!\n\n";

                    break;

                }

                // A value of 1 is added to array_count as values are about to be added to the array
                array_count++;

                // A value of 1 is added to error_count
                error_count++;

                // A fahrenheit variable is declared for the user to assign
                double fahrenheit;

                // User assign fahrenheit with a value
                cout << "Input Fahrenheit: ";
                cin >> fahrenheit;

                // Conditional statement checks to make sure it is not an impossibly low number, if it is then the user is prompted to enter a new one
                if (fahrenheit < -459.67) {

                    cout << "Impossible Temperature, Try Again\n";

                    cout << "Input Fahrenheit: ";
                    cin >> fahrenheit;

                }

                // The Temperature in Celcius is shown through this function
                showCelcius(fahrenheit);

                cout << endl;

                // The values of the Temp in F, C, and K are added to the array using array_count
                values[0][array_count] = fahrenheit;
                values[1][array_count] = (5.0 / 9.0) * (fahrenheit - 32);
                values[2][array_count] = (5.0 / 9.0) * (fahrenheit - 32) + 273.15;

                // This statement is over
                break;

            // If the user wishes to convert Fahrenheit to Kelvin, this case is executed
            case 2:

                if (error_count >= 10) {

                    cout << "Error: Too Many Temperatures!\n\n";

                    break;
                    
                }

                array_count++;

                error_count++;

                cout << "Input Fahrenheit: ";
                cin >> fahrenheit; 

                if (fahrenheit < -459.67) {

                    cout << "Impossible Temperature, Try Again\n";

                    cout << "Input Fahrenheit: ";
                    cin >> fahrenheit;

                }

                // The Temperature in Kelvin is shown with this function
                showKelvin(fahrenheit);

                cout << endl;

                values[0][array_count] = fahrenheit;
                values[1][array_count] = (5.0 / 9.0) * (fahrenheit - 32);
                values[2][array_count] = (5.0 / 9.0) * (fahrenheit - 32) + 273.15;

                break;

            // If the user wishes to display all data they have entered so far, this case is executed
            case 3:

                cout << "F:\t";

                // For loops iterate through the current values using the array_count integer, outputting each one
                for (int i = 0; i < array_count+1; i++) {

                    cout << values[0][i] << "\t";

                }

                cout << "\nC:\t";

                for (int i = 0; i < array_count+1; i++) {

                    cout << values[1][i] << "\t";

                }

                cout << "\nK:\t";

                for (int i = 0; i < array_count+1; i++) {

                    cout << values[2][i] << "\t";

                }

                cout << "\n\n";

                // This statement is over
                break;

            // If the user wishes to quit the program, this case is executed
            case 4:

                cout << "Program has been closed. Come again!\n" << endl;

                // Count is set to 100
                count = 100;

                break;

            // If the user enters an invalid input, this case will execute
            default:

                cout << "Error: Invalid Input. Restart Program\n\n";

                count = 100;

                break;

        }

        // If the program was closed or there was an invalid input, this conditional statement will cause the for loop to break
        if (count == 100) {

            break;

        }

        showMenu();

        cout << "\nInput the number of desired output: ";
        // cin.ignore allows for multiple cin inputs
        cin.ignore(1000, '\n');
        cin >> collected_num;

    }

    // Conditional statement that will most likely only execute if count is assigned a value of 100
    while (count < 100);

    // 0 is returned to the main function
    return 0;

}

// Function that shows the menu of options
void showMenu() {

    cout << "1. Convert Fahrenheit to Celcius (Centigrade)\n";
    cout << "2. Convert Fahrenheit to Kelvin\n";
    cout << "3. Display Data \n";
    cout << "4. Quit Program \n";

}

// Function that displays Fahrenheit converted to Celcius with fahrenheit as an input
void showCelcius(double fahrenheit) {

    // The celcius variable is declared and calculated
    double celcius = (5.0 / 9.0) * (fahrenheit - 32);

    // The temperature in Celcius is outputted
    cout << "Temperature in Celcius: " << fixed << setprecision(1) << celcius << "\n";

}

// Essentially the same as the showCelcius function but with a different calculation and purpose
void showKelvin(double fahrenheit) {

    double kelvin = (5.0 / 9.0) * (fahrenheit - 32) + 273.15;

    cout << "Temperature in Kelvin: " << fixed << setprecision(1) << kelvin << "\n";

}

