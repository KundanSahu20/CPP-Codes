#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string university;
    
public:
    // Constructor
    Student(std::string n, int a, std::string u) {
        name = n;
        age = a;
        university = u;
    }
    
    // Getter methods
    std::string getName() {
        return name;
    }
    
    int getAge() {
        return age;
    }
    
    std::string getUniversity() {
        return university;
    }
};

int main() {
    std::string name, university;
    int age;
    
    std::cout << "Enter student name: ";
    std::getline(std::cin, name);
    
    std::cout << "Enter student age: ";
    std::cin >> age;
    
    std::cin.ignore(); // Ignore the newline character in the input buffer
    
    std::cout << "Enter university name: ";
    std::getline(std::cin, university);
    
    // Create a Student object
    Student student(name, age, university);
    
    // Print student information
    std::cout << "\nStudent Information" << std::endl;
    std::cout << "Name: " << student.getName() << std::endl;
    std::cout << "Age: " << student.getAge() << std::endl;
    std::cout << "University: " << student.getUniversity() << std::endl;
    
    return 0;
}
