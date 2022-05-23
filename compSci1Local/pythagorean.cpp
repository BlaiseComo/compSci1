#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void theorem() {

    double a, b;

    cout << "Input A and B value: ";
    cin >> a >> b;

    double hypotenuse = pow(pow(a, 2) + pow(b, 2), 0.5);

    cout << fixed << setprecision(2) << hypotenuse << "\n";

}


int main() {

    theorem();

}