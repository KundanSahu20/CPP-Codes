#include <iostream>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;
class student
{
private:
    char name[10];
    int mark_1,mark_2,mark_3,total_mark;
public:
    int roll_number;
    void input();
    void output();
};

void student::input()
{
    cout << "\nEnter Roll Number =";
    cin >> roll_number;
    cout << "\nEnter Name =";
    cin >> name;
    cout << "\n Enter three Subject Marks =";
    cin >> mark_1 >> mark_2 >> mark_3;
}
void student :: output()
{
    cout << "\n*****MARKSHEET******";
    cout << "\nROll Number = "<< roll_number;
    cout << "\nStudent Name  = "<< name;
    cout << "\n--------------------------------------------";
    cout << "\n Subject\tMaximum\tMinimum\tObtain Mark";
    cout<< "\n C++    \t80    \t27     \t"<<mark_1;
    cout<< "\n DBMS   \t80    \t27     \t"<<mark_2;
    cout<< "\n LINUX  \t80    \t27     \t"<<mark_3;
    cout << "\n--------------------------------------------";
    cout << "\nTOTAL MARKS OBTAIN = "<< (mark_1+mark_2+mark_3);

}

int main()
{
    int x;
    student s[3];
    for( int i=0; i<3; i++)
    {
        cout<< "\nEnter Details For Student "<< i+1;
        s[i].input();
    }
    clrscr();
    for( int i=0; i<3; i++)
    {
        cout<< "\n\n Result Of Student "<< i+1;
        s[i].output();
    }
    cout << "\n\nEnter Roll Number To Search Specific Student =";
    cin >> x;
    for(int i=0; i<3; i++)
    {
        if( s[i].roll_number == x)
        { 
            cout<<"\nResult of Student with roll number "<< x;
            s[i].output();
            break;
        }
    }
    getch();
}