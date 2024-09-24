#include<iostream>
#include<conio.h>
using namespace std;
main()
{
int a=30,b=30,c=35,result;


        //Logical AND ( && )

    result=(a == b) && (c > b);// ( a equal to b) and (c is greater than b)
    cout << "(a==b)&&(c>b) is  " << result <<endl;
    result=(a == b) && (c < b); // (a equal to b) and ( c is less than b)
    cout << "(a==b)&&(c<b) is  " << result <<endl;
        
        //Logical OR ( || )

    result=(a == b) || (c < b); //(a equal to b) or ( c is less than b)
    cout << "(a==b)||(c<b) is  " << result <<endl;
    result=(a != b) || (c < b); //(a is not equal to b) or ( c is less than b)
    cout << "(a!=b)||(c<b) is  "<< result <<endl;
        // Logical NOT( ! )

    result= !(a != b); // not (a not equal to b)
    cout << "!(a!=b) is  " << result <<endl;
    result= !(a <= c); // not(a equal to b)
    cout << "!(a<=c) is  "<< result <<endl;

    getch();

}