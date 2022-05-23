#include <iostream>
#include <string>

using namespace std;

int main() {

    string name1, name2;

    cout << "Input first name: ";
    cin >> name1;

    cout << "Input second name: ";
    cin >> name2;

    int name_1 = name1[0];

    int name_2 = name2[0];

    if (name_1 < name_2) {

        cout << name1 << ", " << name2 << "\n";

    }
    else {

        cout << name2 << ", " << name1 << "\n";
        
    }


    
}