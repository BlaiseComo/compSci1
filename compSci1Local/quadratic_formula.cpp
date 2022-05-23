#include <iostream> 
#include <cmath>

using namespace std;

int main() {

    double a, b, c;

    cout << "Input A value: ";
    cin >> a;

    cout << "Input B value: ";
    cin >> b;

    cout << "Input C value: ";
    cin >> c; 

    if ((pow(b,2) - (4*a*c)) < 0) {

        cout << "There is no solution\n";

    }

    else {

        double ans1 = (-b + sqrt((b * b) - (4*a*c))) / (2 * a);

        double ans2 = (-b - sqrt((b * b) - (4*a*c))) / (2 * a);

        cout << "x = " << ans1 << ", x = " << ans2 << "\n";


    }

}