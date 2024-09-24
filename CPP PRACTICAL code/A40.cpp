/*Create a base class shape having two data member with two member function getdata (pure virtual function) and printarea (not pure virtual function). Derive Classes triangle and rectangle from class shape and redefine member function printarea in both classes triangle and rectangle and test the functioning of classes using pointer to base class objects and normal objects.*/
#include <iostream>
#include<conio.h>
using namespace std;

class Shape {
    protected:
        double width, height;

    public:
        virtual void getdata() = 0;
        virtual void printarea() 
        {
            cout << "Area: " << width * height << endl;
        }
};
class Triangle : public Shape {
    public:
        void getdata() 
        {
            cout << "Enter base and height of the triangle: ";
            cin >> width >> height;
        }
        void printarea() 
        {
            cout << "Triangle Area: ";
            cout << (width * height)/2 << "\n";
        }
};
class Rectangle : public Shape {
    public:
        void getdata() 
        {
            cout << "Enter length and width of the rectangle: ";
            cin >> width >> height;
        }
        void printarea() 
        {
            cout << "Rectangle ";
            Shape::printarea();
        }
};

int main() 
{
    Shape* S;
    Triangle T;
    Rectangle R;

    S = &T;
    S->getdata();
    S->printarea();

    S = &R;
    S->getdata();
    S->printarea();

    Triangle t;
    t.getdata();
    t.printarea();

    Rectangle r;
    r.getdata();
    r.printarea();

    getch();
}