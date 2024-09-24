#include<iostream>
#include<conio.h>
using namespace std;
class arith{

    private:
    int a,b,c,d,e,f,g;
    public:
    void enter();
    void arithmetic();
};
int main(){
    arith a1;
    a1.enter();
    a1.arithmetic();  
    return 0;
    getch();
}
void arith :: enter()
{
    cout << "Enter Two Number to perfrom arithemetic task = ";
    cin >> a >> b;
}
void arith ::arithmetic()
{
    cout << "value of a =" << a << "  and b="<< b << endl;
    cout << "Addition of a and b = "<< a+b << endl;
    cout << "Subtraction of a and b = " << a-b << endl;
    cout << "Multiplication of a and b = " << a*b << endl;
    cout << "Modules of a and b = " << a%b << endl;
    cout << "Division of a and b = "<< a/b << endl;
}