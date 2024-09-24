#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int a,b,c;

    cout <<"Enter Three Number :: " << endl;
    cin >> a >> b >> c;

    if (a>b && a>c)
    cout << a << " is greater number"<< endl;
    else if (b>c)
    cout << b << " is greater number"<< endl;
    else 
    cout << c << " is greater number"<< endl;

    getch();
}