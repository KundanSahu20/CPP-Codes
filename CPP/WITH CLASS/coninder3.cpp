#include <iostream>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;
class A {
    int a;
public:
    A(int x){
        cout << "\nClass A Value of GIVEN Number = "<< x;
    }
};
class B : public A{
    public:
    B(int a, int b):A(a){
        cout << "\nClass B Value of GIVEN Number = " << b ;
    }
};
class C: public B{
    public:
    C(int i, int j, int k):B(i,j){
        cout << "\nClass C Value of Given Number = " << k;
    }
};
int main() {
  C a(1,2,3);  
    return 0;
}