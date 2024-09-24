#include <iostream>
#include <conio.h>
using namespace std;
class A {
    int x,y;
public:
    A(int a,int b){
        x=a;
        y=b;
        cout << "\nClass A Active ";
    }
     void display(){
        cout <<"\n VALUE OF X :" << x ;
        cout << "\n VALUE OF Y :" << y ;
    }
};
class B : public A{
    int x,y;
public:
    B(int a,int b,int c, int d):A(a,b){
        x=c;
        y=d;
        cout << "\nClass B Active ";
    }
    void display1(){
        cout <<"\n VALUE OF X :" << x ;
        cout << "\n VALUE OF Y :" << y ;
    }
};
int main() {
    B b1(1,2,3,4);
    b1.display();
    b1.display1();
    return 0;
}