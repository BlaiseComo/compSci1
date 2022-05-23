#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string name;

    cout << "Input name: ";
    cin >> name;

    if (isupper(name[0])) {

        cout << "Hi " << name << "\n";
    }

    else {

        name[0] = toupper(name[0]);

        cout << "Hi " << name << "\n";
        
    }

}