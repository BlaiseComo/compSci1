#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));
    int num = rand() % 10 + 1;

    switch (num) {
        case 1:
            cout << "Aim for the stars";
            break;
        case 2:
            cout << "JUST DO IT";
            break;
        case 3:
            cout << "Think about the philosophy of life";
            break;
        case 4:
            cout << "Choose your relationships wisely";
            break;
        case 5:
            cout << "Chase your dreams";
            break;
        case 6: 
            cout << "Travel wherever and whenever you can";
            break;
        case 7:
            cout << "Never stop learning";
            break;
        case 8:
            cout << "Enjoy the little things";
            break;
        case 9:
            cout << "Become a master of all things";
            break;
        case 10:
            cout << "Look towards the brighter days ahead";
            break;
    }


        
    

}