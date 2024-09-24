#include <iostream>
#include <cmath>

class Polar {
private:
    double radius; // Radius (r)
    double angle;  // Angle in radians (θ)

public:
    // Constructor (initialize radius and angle)
    Polar(double r = 0.0, double th = 0.0) : radius(r), angle(th) {}

    // Overloaded insertion operator (for display)
    friend std::ostream& operator<<(std::ostream& os, const Polar& p) {
        os << "Radius: " << p.radius << ", Angle: " << p.angle << " radians";
        return os;
    }

    // Overloaded extraction operator (for input)
    friend std::istream& operator>>(std::istream& is, Polar& p) {
        std::cout << "Enter radius: ";
        is >> p.radius;
        std::cout << "Enter angle (in radians): ";
        is >> p.angle;
        return is;
    }

    // Overloaded addition operator to add two polar coordinates
    Polar operator+(const Polar& other) const {
        double x1 = radius * cos(angle);
        double y1 = radius * sin(angle);
        double x2 = other.radius * cos(other.angle);
        double y2 = other.radius * sin(other.angle);

        double xSum = x1 + x2;
        double ySum = y1 + y2;

        double resultRadius = sqrt(xSum * xSum + ySum * ySum);
        double resultAngle = atan2(ySum, xSum);

        return Polar(resultRadius, resultAngle);
    }
};

int main() {
    Polar polar1, polar2;

    std::cout << "Enter polar coordinates for the first point:\n";
    std::cin >> polar1;

    std::cout << "Enter polar coordinates for the second point:\n";
    std::cin >> polar2;

    Polar sum = polar1 + polar2;
    std::cout << "Sum of polar coordinates: " << sum << std::endl;

    return 0;
}
