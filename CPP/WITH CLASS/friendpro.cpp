#include <iostream>
#include <cmath> // For trigonometric functions

class Polar {
private:
    double radius; // Radius (distance from origin)
    double angle;  // Angle in radians

public:
    // Constructor to initialize radius and angle
    Polar(double r = 0, double a = 0) : radius(r), angle(a) {}

    // Input function to set radius and angle
    void input() {
        std::cout << "Enter radius: ";
        std::cin >> radius;
        std::cout << "Enter angle (in degrees): ";
        std::cin >> angle;
        // Convert angle to radians
        angle = angle * M_PI / 180.0;
    }

    // Output function to display radius and angle
    void display() const {
        std::cout << "Radius: " << radius << "\n";
        std::cout << "Angle (in degrees): " << angle * 180.0 / M_PI << "\n";
    }

    // Friend function to add two Polar objects
    friend Polar add(const Polar& p1, const Polar& p2) {
        double x1 = p1.radius * cos(p1.angle);
        double y1 = p1.radius * sin(p1.angle);
        double x2 = p2.radius * cos(p2.angle);
        double y2 = p2.radius * sin(p2.angle);

        double xSum = x1 + x2;
        double ySum = y1 + y2;

        double resultRadius = sqrt(xSum * xSum + ySum * ySum);
        double resultAngle = atan2(ySum, xSum); // Result in radians

        return Polar(resultRadius, resultAngle);
    }
};

int main() {
    Polar p1, p2;
    std::cout << "Enter details for Polar object 1:\n";
    p1.input();

    std::cout << "\nEnter details for Polar object 2:\n";
    p2.input();

    Polar sum = add(p1, p2);

    std::cout << "\nSum of Polar objects:\n";
    sum.display();

    return 0;
}







