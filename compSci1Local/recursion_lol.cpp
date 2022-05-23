#include <iostream>

using namespace std;

double recursion(int x);

int main() {

    cout << recursion(10) << endl;

}

double recursion(int x) {

    if (x == 0) {

        return 0;

    }

    else if (x == 1) {

        return 1;

    }

    else {

        return x + recursion(x-1);

    }

}



