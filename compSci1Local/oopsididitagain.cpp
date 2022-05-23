#include <iostream>
#include <ctime>

using namespace std;

int main() {

    long int seconds = static_cast<long int> (time(NULL));
    cout << "Seconds: " << seconds << "\n";

    long int minutes = seconds / 60;
    cout << "Minutes: " << minutes << "\n";

    long int hours = minutes / 60;
    cout << "Hours: " << hours << "\n";

    long int days = hours / 24;
    cout << "Days: " << days << "\n";

    long int months = days / 30;
    cout << "Months: " << months << "\n";

    long int years = months / 12;
    cout << "Years: " << years << "\n";

}