#include <iostream>
#include <string>

using namespace std;

enum triangleType {SCALENE, ISOSCELES, EQUILATERAL, NO_TRIANGLE}; 

triangleType triangleShape(double a, double b, double c);

int main() {

    double a, b, c;

    string triangle;

    cout << "Input side a of triangle: ";
    cin >> a;

    cout << "Input side b of triangle: ";
    cin >> b;

    cout << "Input side c of triangle: ";
    cin >> c;

    switch (triangleShape(a, b, c)) {

        case 0:
            triangle = "Scalene";
            break;
        case 1:
            triangle = "Isosceles";
            break;
        case 2:
            triangle = "Equilateral";
            break;
        case 3:
            triangle = "No Triangle";
            break;
    }

    cout << triangle << "\n";
}

triangleType triangleShape(double a, double b, double c) {

    if (a + b <= c || a + c <= b || b + c <= a) {

        return NO_TRIANGLE;

    }

    else if (a == b && a == c && c == b) {

        return EQUILATERAL;

    }

    else if (a == b || a == c || c == b) {

        return ISOSCELES;

    }

    else {

        return SCALENE;

    }
}




