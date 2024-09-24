#include<iostream>
#include<conio.h>
using namespace std;

class Complex{
    int num1,num2;
    public:
        void get(){
            cout << "\nEnter Number :";
            cin >> num1 >> num2;
        }
        friend Complex operator+(Complex a,Complex b);
        void show(){
            cout <<"\t"<< num1 <<"+"<<num2<<"i"<<"\n";
        }
};
Complex operator+(Complex a, Complex b){
    Complex c;
    c.num1=a.num1+b.num1;
    c.num2=a.num2+b.num2;
    return(c);
}
int main(){
    Complex ob1,ob2;
    ob1.get();
    ob2.get();

    Complex sum=ob1+ob2;

    cout<<"\nEntered Values :"<< endl;
    ob1.show();
    ob2.show();
    cout << "\nSum of Complex number :";
    sum.show();
    getch();
}