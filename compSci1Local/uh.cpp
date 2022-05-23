#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a,b,c;
    double b_1, a_1, c_1;

    cout << "Input sides a b and c of triangle: ";
    cin >> a >> b >> c;

    if (a > b || c) {

        a_1 = a;

        c_1 = c;

        c = a_1;

        a = c_1;

    }
    
    else if (b > a || c) {

        b_1 = b;

        c_1 = c;

        c = b_1;

        b = c_1;

    }

    

    if (pow(c, 2) == pow(a, 2) + pow(b, 2)) {

        cout << "It is a right triangle\n";

    }

    else if (pow(c, 2) > pow(a,2) + pow(b,2)) {

        cout << "It is an obtuse triangle\n";

    }

    else {

        cout << "It is an acute triangle\n";

    }

    

}