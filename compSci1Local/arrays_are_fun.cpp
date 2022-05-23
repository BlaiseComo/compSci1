#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));

    const int array_size = 5;

    string array1[array_size] = {"24/7", "spaceships", "coffee", "bacon", "hell yeah"};
    string array2[array_size] = {"empowered", "mcLovin it", "super", "hyperfocused", "hell yeah"};
    string array3[array_size] = {"analyze", "adapt", "overcome", "improvise", "hell yeah"};

    string yes_no = "y";

    string yes = "y";

    do {

        cout << array1[rand()%5] << " " << array2[rand()%5] << " " << array3[rand()%5] << "\n";
        cout << "Another phrase? y/n: ";
        cin >> yes_no;

    }
    while (yes_no == yes);


}