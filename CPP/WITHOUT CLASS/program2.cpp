#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a=10,B,C,D,E;

    cout << "PROGRAM FOR PRE,POST Increment,Decrement Operator" << endl;

    a=10;
    C= a++;
    cout << " VALUE OF C " << C << endl;
    cout << " VALUE OF A " << a << endl;

    a=10;
    B= ++a;
    cout << " VALUE OF B " << B << endl;
    cout << " VALUE OF A " << a << endl;

    a=10;
    D= a--;
    cout << " VALUE OF D " << D << endl;
    cout << " VALUE OF A " << a << endl;

    a=10;
    E= --a;
    cout << " VALUE OF E " << E << endl;
    cout << " VALUE OF A " << a << endl;

    return 0;
}
