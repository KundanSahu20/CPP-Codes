#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int Num1,Num2,Sum,Sub,Multi;
    float Div,Mod;

    cout << "Enter Num1 and Num2 for Arthemetic Operator :: ";
    cin >> Num1 >> Num2;
    Sum = Num1+Num2;
    Sub= Num1- Num2;
    Multi=Num1*Num2;
    Div=Num2/Num1;
    Mod=Num2%Num1;

    cout << "Sum of NUm1 and NUm2 is :: "<<Sum<<endl;
    cout << "Sub of NUm1 and NUm2 is :: "<<Sub<<endl;
    cout << "Multi of NUm1 and NUm2 is :: "<<Multi<<endl;
    cout << "Div of NUm1 and NUm2 is :: "<<Div<<endl;
    cout << "Mod of NUm1 and NUm2 is :: "<<Mod<<endl;

    return 0;

}