#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream inFile;
    string name, file_name;

    cout << "Input file name: ";
    cin >> file_name;

    inFile.open(file_name);

    if (inFile) {
        getline(inFile, name);
        cout << "Welcome back " << name << "\n";
        inFile.close();
    }
    else {
        inFile.close();
        ofstream inFile;
        inFile.open(file_name);
        cout << "Please tell us your name: ";
        cin >> name;
        cout << "Hello " << name << "!\n";
        inFile << name << "\n";
        inFile.close();
       
    }

}