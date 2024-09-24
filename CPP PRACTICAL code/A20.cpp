#include <iostream>
#include <conio.h>
using namespace std;

class Polar {
private:
    double radius;
    double angle;
public:
    Polar(double r = 0.0, double a = 0.0) 
    {
        radius = r;
        angle = a;
    }

    Polar(const Polar &X) {
        radius = X.radius;
        angle = X.angle;
    }
    void display() {
        std::cout << "Radius: " << radius << ", Angle: " << angle << " degrees" << std::endl;
    }
};
int main() {
    double redius,angle;
    cout << "\n Enter Redius and Angle =";
    cin >> redius >> angle;

    Polar P1;
    cout << "Default Polar1: ";
    P1.display();

    Polar P2 = P1;
    cout << "Default Copy Polar2: ";
    P2.display();

    Polar P3(redius,angle);
    cout << " Parameterized Polar3: ";
    P3.display();

    getch();
}