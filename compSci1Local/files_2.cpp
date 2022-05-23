#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {

    string name;

    ofstream outFile;

    outFile.open("log.txt", ios::app);

    cout << "Input File Data: ";

    getline(cin, name);

    outFile << "\n" << name;

    outFile.close();

}