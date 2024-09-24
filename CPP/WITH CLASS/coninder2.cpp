#include <iostream>
#include <conio.h>
using namespace std;
class A {
    int x,y;
public:
    A(int a,int b){
        x=a;
        y=b;
        cout << "\nClass A Active,";
    }
     void display(){
        cout <<"\nCLASS A VALUE OF X = " << x << ",Y = " << y ;
    }
};
class B:public A{
    int x,y;
public:
    B(int a,int b,int c, int d):A(a,b){
        x=c;
        y=d;
        cout << "Class B Active,";
    }
    void display1(){
        cout <<"\nCLASS B VALUE OF X = " << x << ",Y = " << y ;
    }
};
class C:public B{
    int x,y;
public:
    C(int a, int b,int c,int d,int i,int j):B(a,b,c,d){
        x=i;
        y=j;
        cout << "Class C Active :" << endl;
    }
    void display2(){
        cout <<"\nCLASS C VALUE OF X = " << x << ",Y = " << y ;
    }
};
int main() {
    C b1(1,2,3,4,5,6);
    b1.display();
    b1.display1();
    b1.display2();
    return 0;
}