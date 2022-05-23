#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265359;

class Sphere {

    private:

        double radius;

    public:

        double getVolume() const;

        double getSurfaceArea() const;

        double getRadius() const;

        void setRadius(double r);

        Sphere(double r);

        Sphere();

};

int main() {

    Sphere largeSphere;

    Sphere smallSphere;

    largeSphere.setRadius(10);

    cout << "Volume of large sphere is " << largeSphere.getVolume();

    cout << "\nVolume of small sphere is " << smallSphere.getVolume() << "\n";

}

double Sphere::getVolume() const {

    return (4.0/3.0) * PI * pow(radius, 3);

}

double Sphere::getSurfaceArea() const {

    return 4 * PI * pow(radius, 2);

}

double Sphere::getRadius() const {

    return radius;

}

void Sphere::setRadius(double r) {

    if (r > 0) {

        radius = r;

    }

    else {

        radius = 1;

    }

}

Sphere::Sphere(double r) {

    setRadius(r);

}

Sphere::Sphere() {

    radius = 0;

}