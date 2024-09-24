#include<iostream>
#include<conio.h>
#define clrscr(); system("cls");
using namespace std;

struct student
{
    int roll_number;
    char name[10];
    int mark_1, mark_2, mark_3, total_mark;
    void input();
    void output();
} S;

void student::input()
{
    cout << "\nEnter Roll Number 0f Student =";
    cin >> S.roll_number;
    cout << "\nEnter Name of Student =";
    cin >> S.name;
    cout << "\n Enter three Subject Marks =";
    cin >> S.mark_1 >> S.mark_2 >> S.mark_3;
}
void student::output()
{
    cout << "\n*****MARKSHEET******";
    cout << "\nROll Number of Student = "<< S.roll_number;
    cout << "\nName of Student = "<< S.name;
    cout << "\n--------------------------------------------";
    cout << "\n Subject\tMaximum\tMinimum\tObtain Mark";
    cout<< "\n C++    \t80    \t27     \t"<< S.mark_1;
    cout<< "\n DBMS   \t80    \t27     \t"<< S.mark_2;
    cout<< "\n LINUX  \t80    \t27     \t"<< S.mark_3;
    cout << "\n--------------------------------------------";
    cout << "\nTOTAL MARKS OBTAIN = "<< ( S.mark_1+S.mark_2+S.mark_3);

}
int main()
{
    S.input();
    clrscr();
    S.output();   
    getch();
}