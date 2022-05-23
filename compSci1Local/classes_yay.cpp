#include <iostream>
#include <iomanip>

using namespace std;

class rectangularPrism {

    private:

        double width, height, depth;

    public:

        double getVolume() const;

        double getSurfaceArea() const;

        double getWidth() const;

        double getHeight() const;

        double getDepth() const;

        void setRectangularPrism(double w, double h, double d);

};

int main() {

    rectangularPrism smallPrism;

    rectangularPrism largePrism;

    smallPrism.setRectangularPrism(3, 4.5, 5);

    largePrism.setRectangularPrism(10, 15, 20.7);

    cout << fixed << setprecision(2);

    cout << "Volume of small prism is: " << smallPrism.getVolume() << "\nVolume of large prism is: " << largePrism.getVolume() << "\n";

    cout << "Surface Area of small prism is: " << smallPrism.getSurfaceArea() << "\nSurface area of a large prism is: " << largePrism.getSurfaceArea() << "\n";

}

double rectangularPrism::getVolume() const {

    return width * height * depth;

}

double rectangularPrism::getSurfaceArea() const {

    return width * height;

}

double rectangularPrism::getWidth() const {

    return width;

}

double rectangularPrism::getHeight() const {

    return height;

}

double rectangularPrism::getDepth() const {

    return depth;

}

void rectangularPrism::setRectangularPrism(double w, double h, double d) {

    if (w > 0) {

        width = w;

    }

    else {

        width = 1;

    }

    if (h > 0) {

        height = h;

    }

    else {

        height = 1;

    }

    if (d > 0) {

        depth = d;

    }

    else {

        depth = 1;

    }
}








