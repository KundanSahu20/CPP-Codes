#include <iostream>
#include <cstring> // Include this header for strcpy function
#include <conio.h>

using namespace std;

class Student {
public:
    int rollNumber;
    char name[20]; // Use an array for the student's name

    Student(int roll, const char* studentName) {
        rollNumber = roll;
        strcpy(name, studentName); // Copy the student name
    }

    void displayStudentInfo() {
        cout << "\nRoll Number: " << rollNumber << "\n";
        cout << "Name: " << name << "\n"; // Use %s for character arrays
    }
};

class Exam {
public:
    char subject[20];
    int minMarks;
    int maxMarks;
    int obtainedMarks;

    Exam(const char* subj, int min, int max, int obtained) {
        strcpy(subject, subj); // Copy the subject name
        minMarks = min;
        maxMarks = max;
        obtainedMarks = obtained;
    }

    void displayExamInfo() {
        cout << "Subject: " << subject << "\n";
        cout << "Minimum Marks: " << minMarks << "\n";
        cout << "Maximum Marks: " << maxMarks << "\n";
        cout << "Obtained Marks: " << obtainedMarks << "\n";
    }
};

class Result : public Student, public Exam {
public:
    Result(int roll, const char* studentName, const char* subj, int min, int max, int obtained) : Student(roll, studentName), Exam(subj, min, max, obtained) {}

    void displayResult() {
        displayStudentInfo();
        displayExamInfo();
    }
};

int main() {
    int rollNumber;
    char studentName[20]; 
    char subject[20];
    int obtainedMarks;
    int minMarks = 40;
    int maxMarks = 100;

    cout << "\nEnter Roll Number of Student : ";
    cin >> rollNumber;
    cout << "\nEnter Name of Student : ";
    cin >> studentName;
    cout << "\nEnter Name of Subject : ";
    cin >> subject;
    cout << "\nEnter Obtained Marks : ";
    cin >> obtainedMarks;

    Result result(rollNumber, studentName, subject, minMarks, maxMarks, obtainedMarks);
    result.displayResult();

    return 0;
}
