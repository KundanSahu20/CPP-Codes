#include <iostream>
using namespace std;

class Vehicle {
protected:
    int wheels;

public:
    Vehicle(int w) : wheels(w) {}

    void display() {
        cout << "Number of wheels: " << wheels << endl;
    }
};

class Car : public Vehicle {
public:
    Car() : Vehicle(4) {}
};

int main() {
    Car myCar;
    myCar.display();  // Output: Number of wheels: 4

    return 0;
}