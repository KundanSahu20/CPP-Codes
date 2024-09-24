#include <iostream>
#include <conio.h>
using namespace std;

class Distance {
private:
    int feet;
    float inch;
public:
    void input() {
        cout << "Enter distance in feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inch;
    }

    void display() {
        cout << "Distance: " << feet << " feet " << inch << " inches\n";
    }

    friend Distance add( Distance d1,  Distance d2) 
    {
        Distance result;
        result.feet = d1.feet + d2.feet;
        result.inch = d1.inch + d2.inch;
        return result;
    }
    
    friend Distance subtract( Distance& d1,  Distance& d2) 
    {
        Distance result;
        result.feet = d1.feet - d2.feet;
        result.inch = d1.inch - d2.inch;
        return result;
    }
};

int main() {
    Distance d1, d2;
    cout << "Enter details for Distance 1:\n";
    d1.input();

    cout << "\nEnter details for Distance 2:\n";
    d2.input();

    Distance sum = add(d1, d2);
    Distance difference = subtract(d1, d2);
    
    cout << "\nSum of distances:\n";
    sum.display();

    cout << "\nDifference of distances:\n";
    difference.display();
    getch();
}
