#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.14159265359;

class Circle {

    private:

        double radius;

    public:

        double getArea() const;

        double getCircumference() const;

        double getDiameter() const;

        double getRadius() const;

        void setRadius(double r);

};

int main() {

    Circle largeCircle;

    Circle smallCircle;

    largeCircle.setRadius(6);

    smallCircle.setRadius(2);

    cout << setprecision(2) << fixed;

    cout << "Area of large circle is " << largeCircle.getArea() << "\nArea of small circle is " << smallCircle.getArea() << "\n";

}

double Circle::getArea() const {
 
    return PI * pow(radius, 2);

}

double Circle::getCircumference() const {

    return 2 * PI * radius;

}

double Circle::getDiameter() const {

    return 2 * radius;

}

double Circle::getRadius() const {

    return radius;

}

void Circle::setRadius(double r) {

    if (r > 0) {

        radius = r;

    }

    else {

        radius = 1;

    }
}