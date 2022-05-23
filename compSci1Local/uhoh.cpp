#include <iostream>

using namespace std;

double recursion(int num);

int main() {

    cout << recursion(9) << "\n";

}

double recursion(int num) {

    if (num == 0) {

        return 0;

    }

    else if (num == 1) {

        return 1;

    }

    else {

        return recursion(num-1) + recursion(num-2);

    }

}