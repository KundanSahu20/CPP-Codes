#include <iostream>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;
class mother;
class father {
    private: 
        int sal;
    public:
        void get(){
            cout << "\nEnter Salary of Father :";
            cin >> sal;
        }
        void friend add( father p1,mother p2);
};
class mother {
    private: 
        int sal;
    public:
        void get(){
            cout << "\nEnter Salary of Mother :";
            cin >> sal;
        }
        void friend add( father p1,mother p2);
};
void add(father p1, mother p2){
    cout << "\nAddition of Salary Father and Mother : "<< p1.sal + p2.sal;
}
int main() {
    father a; 
    mother b;
    a.get();
    b.get();
    add(a,b);
    getch();
}