#include <iostream>
#include <conio.h>
using namespace std;
class Father; 
class Mother { 
private:
    int salary;
public:
    void get(){
        cout << "\nEnter Salary of Mother :";
        cin >> salary;
    }
    friend int Total(Mother m1,Father f1);
};
class Father {
private:
    int salary;
public:
    void get(){
        cout << "\nEnter Salary of Father :";
        cin >> salary;
    }
    friend int Total(Mother m1,Father f1);
};
int Total(Mother m1,Father f1) {
    return m1.salary + f1.salary;
}
int main() {
    Father f;
    Mother m;
    f.get();
    m.get();
    int total = Total(m,f);
    cout << "Total family salary: $ " << total << "\n";
    getch();
}
