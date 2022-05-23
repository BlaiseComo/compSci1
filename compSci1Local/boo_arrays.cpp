#include <iostream>
#include <string>

using namespace std;

const int ROWS = 12;
const int COLUMNS = 2;

void getData(int temperature[][COLUMNS], int noOfRows);
int averageHigh(int average_high);

int main() {

    int average_high;

    int temperature[ROWS][COLUMNS];

    getData(temperature, ROWS);

    cout << "Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n";

    for (int i = 0; i < COLUMNS; i++) {

        for (int x = 0; x < ROWS; x++) {

            if (i == 0) {

                average_high += temperature[x][i];

            }

            cout << temperature[x][i] << "\t";

        }

        cout << "\n";

    }

    cout << "Average High Temp: " << averageHigh(average_high) << "\n";

}

void getData(int temperature[][COLUMNS], int noOfRows) {

    for (int r = 0; r < noOfRows; r++){

        cout << "Enter high and low temperatures for the month: ";

        for (int c = 0; c < COLUMNS; c++) {

            cin >> temperature[r][c];

        }

    }
    
}

int averageHigh(int average_high) {

    average_high = average_high / 12;

    return average_high;

}


