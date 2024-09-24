#include<iostream>
using namespace std;

int main()
{

int A=10,B,C,D,E,F;

cout << "value of A before post increment=" << A << endl;
C=A++; // post increment fist process than increment

cout << "VALUE OF C= " << C << endl;
cout << "VALUE OF A= " << A << endl;

A=30; cout << "value of A before post decrement=" << A << endl;
D=A--;

cout << "VALUE OF D= " << D << endl;
cout << "VALUE OF A= " << A << endl;

A=55; cout << "value of A before pre increment=" << A << endl;
E=++A; // pre incrent fist increment than process

cout << "VALUE OF A= " << A << endl;
cout << "VALUE OF E= " << E << endl;

A=44; cout << "value of A before pre decrement=" << A << endl;
F=--A;

cout << "VALUE OF A= " << A << endl;
cout << "VALUE OF F= " << F << endl;

return 0;
}