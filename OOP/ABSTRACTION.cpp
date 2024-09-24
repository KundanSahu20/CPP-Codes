
#include <iostream>
using namespace std;
class Animal {
public:
    virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Woof!" << endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->makeSound();  // Output: Woof!

    delete animal;
    return 0;
}
