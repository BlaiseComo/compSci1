#include <iostream>

using namespace std;

int main() {

    const int ROWS = 7;
    const int COLUMNS = 2;

    int sum_average = 0;

    int lowest = 100;

    int highest;

    int temperature[ROWS][COLUMNS] = { {72, 42}, {74, 41}, {53, 29}, {46, 27}, {48, 29}, {45, 28}, {56, 32} };

    cout << "Mon\tTues\tWed\tThur\tFri\tSat\tSun\tAvg\tLow\tHigh\n";

    for (int i = 0; i < COLUMNS; i++) {

        highest = temperature[0][i];

        for (int x = 0; x < ROWS; x++) {

            cout << temperature[x][i] << "\t";

            sum_average = sum_average + temperature[x][i];

            if (temperature[x][i] < lowest) {

                lowest = temperature[x][i];

            }

            else if (temperature[x][i] > highest) {

                highest = temperature[x][i];

            }

        }

        cout << sum_average / 7;

        cout << "\t";

        cout << lowest;

        cout << "\t" << highest;

        lowest = 100;

        sum_average = 0;

        cout << "\n";

    }


}