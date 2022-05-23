#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    string name;

    cout << "Input name: ";
    cin >> name;

    if (islower(name[0])) {

        cout << "It is lowercase\n";

    }

    else {

        cout << "It is upper\n";
        
    }

}