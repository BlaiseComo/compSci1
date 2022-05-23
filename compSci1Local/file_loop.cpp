#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

    string file_name, text;
    int textcount = 0;
    ofstream outFile;
    ifstream inFile;
    
    cout << "Input file name: ";
    cin >> file_name;

    inFile.open(file_name);
    outFile.open(file_name);
    

    if (!outFile) {

        cout << "Input text: ";
        cin >> text;
        inFile >> text;

        while (inFile) {

            inFile >> text;
            textcount++;

        }
    }
    else {
        while (outFile) {
            outFile << text;
            textcount++;
    }
    cout << "There were " << textcount << " words in the file\n";


    }
    inFile.close();
    outFile.close();


}