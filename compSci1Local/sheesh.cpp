#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double dollars;

    cout << "Input dollars to convert: ";
    cin >> dollars;

    cout << fixed << setprecision(2) << "$" << setw(12) << dollars << "\n";

    cout << "\u20AC" << setw(12) << dollars*0.88 << "\n";

    cout << "\u00A5" << setw(12) << dollars*109.80 << "\n";

    cout << "\u00A3" << setw(12) << dollars*0.77 << "\n";


}