#include<iostream>
#include<string.h>
using namespace std;
class Person {
    // Member variables
    string name;
    int age;

public:
    // Default constructor
    Person() {
        name = "";
        age = 0;
    }

    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Member functions
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }
};

int main(){

Person person1; // Using default constructor
Person person2("John Doe", 30); // Using parameterized constructor

cout << "Person 1: " << person1.getName() << ", Age: " << person1.getAge() << endl;
cout << "Person 2: " << person2.getName() << ", Age: " << person2.getAge() << endl;

person1.setName("Jane Smith");
person2.setAge(35);

cout << "Updated Person 1: " << person1.getName() << ", Age: " << person1.getAge() << endl;
cout << "Updated Person 2: " << person2.getName() << ", Age: " << person2.getAge() << endl;

    return 0;
}