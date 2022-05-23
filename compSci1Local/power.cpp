#include <iostream>

using namespace std;

double power(int x, int y);

int main() {

    cout << power(-5,3) << endl;

}

double power(int x, int y) {

    if (y >= 0) {

        switch(y) {

            case 0:
                return 1;
                break;

            case 1:
                return x;
                break;

            default:
                return x * power(x, y-1);
                break;

        }
    }

    else {

        return 1 / (power(x, -y));

    }

}