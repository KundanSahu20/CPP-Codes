#include <iostream>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;

class Student {
public:
    int rollNumber;
    char studentName[20];
};

class Exam {
public:
    char className[15];
    int marks[3];
};

class Result : public Student, public Exam {
public:
    void displayResult(int rollNumber, const char *studentName, const char *className,int marks[3]) 
    {
        cout << "\n****** RESULT ******";
        cout << "\n\nStudent Class Name: " << className;
        cout << "\nROll Number of Student = "<< rollNumber;
        cout << "\nName of Student = "<< studentName;
        cout << "\n--------------------------------------------";
        cout << "\n Subject\tMaximum\tMinimum\tObtain Mark";
        cout<< "\n C++    \t80    \t27     \t"<<marks[0];
        cout<< "\n DBMS   \t80    \t27     \t"<<marks[1];
        cout<< "\n LINUX  \t80    \t27     \t"<<marks[2];
        cout << "\n--------------------------------------------";
        cout << "\nTOTAL MARKS OBTAIN = "<< (marks[0]+marks[1]+marks[2]);
    }
};

int main() 
{
    int rolln,mark[3];
    char name[20],classn[15];
    Result result;
    cout << "\n Enter Class Name :";
    cin >> classn;    
    cout << "\n Enter Roll Number :";
    cin >> rolln;
    cout << "\n Enter Student Name :";
    cin >> name;    
    for (int i = 0; i < 3; ++i) 
    {
        cout << "\nEnter Obtain Marks Subject "<< i+1 << ": ";
        cin >> mark[i];
    }    
    clrscr();
    result.displayResult(rolln,name,classn,mark);
    getch();
}