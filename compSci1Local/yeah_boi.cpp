#include <iostream>
#include <string>

using namespace std;

int main() {

    string message, substring;

    cout << "Please enter message: ";
    cin >> message;

    cout << "Please enter substring: ";
    cin >> substring;

    int found = message.find(substring);

    if (found != string::npos) {

        cout << "Occurence: " << found << "\n"; 

    }

    else if ((found + 1) != string::npos) {

        cout << "Next occurence: " << found + 1 << "\n";
        
    }

    else {

        cout << "string::npos" << "\n";

    }

    
}
