#include <iostream>
#include<conio.h>
using namespace std;
class Polar {
private:
    double radius;
    double angle;

public:

    Polar(double r, double a)       // Parameterized constructor
    {     
        radius = r;
        angle = a;
    }

    Polar(const Polar &X)       // Copy constructor
    {     
        radius = X.radius;
        angle = X.angle;
    }

    void display() 
    {
        cout << "Radius: " << radius << ", Angle: " << angle << " degrees" << endl;
    }
};

int main() {
    double redius,angle;
    cout << "\n Enter Redius and Angle =";
    cin >> redius >> angle;

    Polar P1(redius, angle);

    cout << "Polar1: ";
    P1.display();

    Polar P2 = P1;

    cout << "Polar2: ";
    P2.display();

    getch();
}
