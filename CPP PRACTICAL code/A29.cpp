#include <iostream>
#include <cmath>

class Cartesian;  // Forward declaration

class Polar {
private:
    double radius;
    double angle;

public:
    Polar(double r, double th) : radius(r), angle(th) {}

    operator Cartesian() const;

    void show() const {
        std::cout << "Polar form: r = " << radius << " and θ = " << angle << " radians\n";
    }
};

class Cartesian {
private:
    double x;
    double y;

public:
    Cartesian(double xVal, double yVal) : x(xVal), y(yVal) {}

    operator Polar() const;

    void show() const {
        std::cout << "\nIn Cartesian form: x = " << x << " and y = " << y << std::endl;
    }
};

Polar::operator Cartesian() const {
    double xVal = radius * cos(angle);
    double yVal = radius * sin(angle);
    return Cartesian(xVal, yVal);
}

Cartesian::operator Polar() const {
    double rVal = sqrt(x * x + y * y);
    double thVal = atan2(y, x);
    return Polar(rVal, thVal);
}

int main() {
    Polar polarObj(5.5, 3.14 / 2);
    polarObj.show();

    Cartesian cartesianObj = polarObj;
    cartesianObj.show();

    Polar polarFromCartesian = cartesianObj;
    polarFromCartesian.show();

    return 0;
}
