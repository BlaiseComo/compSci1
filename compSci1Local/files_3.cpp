#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

    string name;

    double miles, kilometers;

    cout << "Input name: ";
    getline(cin, name);

    cout << "Input miles: ";
    cin >> miles;

    kilometers = miles * 1.609;

    ofstream outFile;

    outFile.open("kilometers.txt", ios::app);

    outFile << "\n" << "You walked " << kilometers << " kilometers today " << name << "!";

    outFile.close();

}