#include <iostream>
#include <conio.h>
using namespace std;

class Mother
{
    private:
        float salary_mother;
    public:
        void get() 
        {
            cout << "Enter mother's salary: ";
            cin >> salary_mother;
        }
        void display() 
        {
            cout << "\nMother's salary: " << salary_mother << endl;
        }
        friend class Father;
};
class Father 
{
    private:
        float salary_father;
    public:
        void get() 
        {
            cout << "Enter father's salary: ";
            cin >> salary_father;
        }
        void display() 
        {
            cout << "Father's salary: " << salary_father << endl;
        }
        void sum_salary(Mother m) 
        {
            cout << "\nSum of salaries Mother and Father : " << salary_father + m.salary_mother << endl;
        }
};

int main() 
{
    Mother m;
    Father f;
    m.get();
    f.get();
    m.display();
    f.display();
    f.sum_salary(m);
    getch();
}