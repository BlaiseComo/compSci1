#include <iostream>
#include <cmath>

using namespace std;

void quadratic_formula() {

    double a_value, b_value, c_value;

    cout << "Input a value: ";
    cin >> a_value;

    cout << "Input b value: ";
    cin >> b_value;

    cout << "Input c value: ";
    cin >> c_value;

    if ((b_value * b_value) - 4 * a_value * c_value > 0) {

        double answer = (-b_value + sqrt((b_value * b_value) - 4 * a_value * c_value)) / (2 * a_value);

        double answer_2 = (-b_value - sqrt((b_value * b_value) - 4 * a_value * c_value)) / (2 * a_value);

        cout << answer << "\n";

        cout << answer_2 << "\n";

    }
    
    else {

        cout << "Imaginary Number!\n";
    }

}

int main() {

    quadratic_formula();

}