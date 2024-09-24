#include <iostream>
#include<conio.h>
using namespace std;

class Circle {
    public:
        double radius;
        double calculate_Area() 
        {
            cout << "\nEnter Radius : ";
            cin >> radius;
            return 3.141 * radius * radius;
        }
};
class Sphere : public Circle 
{
    public:
        double calculate_Volume() 
        {
            return ( calculate_Area() * 4 * radius ) / 3;
        }
};
class Cylinder : public Sphere {
    private:
        float height;
    public:
        double calculate_Volume1() 
        {
            cout << "\nEnter Height of Cylinder : ";
            cin >> height;
            return ( calculate_Area() * height );
        }
};
int main() 
{
    Cylinder A;

   cout << "Area of the Circle: " << A.calculate_Area() <<endl;
   cout << "Volume of the Sphere: " << A.calculate_Volume() <<endl;
   cout << "Volume of the Cylinder: " << A.calculate_Volume1() <<endl;
   getch();
}
