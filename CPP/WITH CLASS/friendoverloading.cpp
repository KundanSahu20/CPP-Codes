#include <iostream>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;
class Unary {
    int a=10,b=20,c=30;
public:
    void show(){
        cout << "\nA = "<< a << "\nB = "<< b << "\nC = "<< c;
    }
    void friend operator-(Unary &x);  
};
void operator-(Unary &x){
    x.a = -x.a;
    x.b = -x.b;
    x.c = -x.c;
}
int main() {
    Unary x1;
    x1.show();
    cout << "\nAfter Overloading "<< endl;
    -x1;
    x1.show();
    getch();
}