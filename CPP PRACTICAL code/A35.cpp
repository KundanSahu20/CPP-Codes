#include<iostream>
#include<conio.h>
using namespace std;

inline float Area_Of_Circle(float radius) 
{
    return 3.141*radius*radius; 
}

int main()
{    
    float radius,AR;
    cout << "\nEnter radius to find area of circle = ";
    cin >> radius;

    AR = Area_Of_Circle(radius);
    cout << "\nAREA OF CIRCLE = "<< AR << endl;
    getch();
}