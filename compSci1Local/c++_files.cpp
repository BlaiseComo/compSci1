#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {

    string name, name1;

    ifstream inFile;

    ofstream outFile;

    outFile.open("Customer.txt");

    cout << "Input File Data: ";

    getline(cin, name);

    outFile << name;

    outFile.close();

    inFile.open("yesyesyes.txt");

    name1 << inFile;

    cout << name1 << endl;

    inFile.close();

}