#include <iostream>
#include <cmath> 
#include <string>
#include <iomanip>

using namespace std;

int main() {

    double distance, angle, height;

    cout << "Enter distance from object in unit(s): ";
    cin >> distance;

    cout << "Enter angle in degree(s): ";
    cin >> angle;

    height = distance * tan(angle * (3.14159265359/180));

    cout << setprecision(4) << height << "\n";

}