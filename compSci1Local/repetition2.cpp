#include <iostream>

using namespace std;

int main() {

    int bottles = 99;

    while (bottles > 1) {

        cout << bottles << " bottles of beer on the wall, " << bottles << " bottles of beer\n";
        bottles--;
        cout << "Take one down and pass it around, " << bottles << " bottles of beer on the wall\n\n";

    }
    
    if (bottles == 1) {
            cout << "Take one down and pass it around, " << bottles << " bottle of beer on the wall\n";
            
            cout << bottles << " bottle of beer on the wall, " << bottles << " bottle of beer\n";
            cout << "Take one down and pass it around, no more bottles of beer on the wall\n";

        }

}