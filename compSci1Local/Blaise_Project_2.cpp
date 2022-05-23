// Libraries for the program
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

// Allows for the absence of std
using namespace std;

// Main Function
int main() {

    // Creation and opening of inFile variable
    ifstream inFile ("Ch3_Ex5Data.txt");

    // Creation and opening of outFile variable
    ofstream outFile ("Ch3_Ex5Output.dat");

    // Creation of name variables
    string firstName, lastName;

    // Creation of Salary variables
    double currentSalary, increaseRate, updatedSalary;

    // For loop that iterates 3 times to get data from three employees
    for (int i = 0; i < 3; i++) {
        
        // Formats outFile data
        outFile << fixed << showpoint << setprecision(2);

        // Gets names from the inFile
        inFile >> lastName >> firstName;

        // Gets salary and increase rate from inFile
        inFile >> currentSalary >> increaseRate;

        // Calculates updated salary
        updatedSalary = currentSalary * (1+increaseRate/100);

        // Inputs data into the output file
        outFile << firstName << " " << lastName << " " << updatedSalary << "\n";

    }

    // 0 is returned to the computer
    return 0;

}
