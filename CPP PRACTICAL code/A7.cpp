#include <iostream>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;
class student
{
private:
    int roll_number;
    char name[10];
    int mark_1,mark_2,mark_3,total_mark;
public:
    void input();
    void output();
};

void student::input()
{
    cout << "\nEnter Roll Number 0f Student =";
    cin >> roll_number;
    cout << "\nEnter Name of Student =";
    cin >> name;
    cout << "\n Enter three Subject Marks =";
    cin >> mark_1 >> mark_2 >> mark_3;
}
void student :: output()
{
    cout << "\n*****MARKSHEET******";
    cout << "\nROll Number of Student = "<< roll_number;
    cout << "\nName of Student = "<< name;
    cout << "\n--------------------------------------------";
    cout << "\n Subject\tMaximum\tMinimum\tObtain Mark";
    cout<< "\n C++    \t80    \t27     \t"<<mark_1;
    cout<< "\n DBMS   \t80    \t27     \t"<<mark_2;
    cout<< "\n LINUX  \t80    \t27     \t"<<mark_3;
    cout << "\n--------------------------------------------";
    cout << "\nTOTAL MARKS OBTAIN = "<< (mark_1+mark_2+mark_3);

}

int main(){
    student s;
    s.input();
    clrscr();
    s.output();   
    getch();
}