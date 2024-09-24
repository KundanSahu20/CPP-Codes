#include <iostream>
#include <conio.h>
using namespace std;

void swapv(int x, int y);
void swapr(int &x, int &y);
void swapa(int *p, int *q);

int main() 
{
    int a = 100, b = 500;
    cout << "\n\nValue of a = " << a << " and b = " << b << " in the main function";
    
    swapv(a, b);
    cout << "\n\nValue of a = " << a << " and b = " << b << " in the main function after call by value";

    swapr(a, b);
    cout << "\n\nValue of a = " << a << " and b = " << b << " in the main function after call by reference";

    swapa(&a, &b);
    cout << "\n\nValue of a = " << a << " and b = " << b << " in the main function after call by address";

    getch();
}

void swapv(int x, int y) 
{
    int z;
    z = x;
    x = y;
    y = z;
    cout << "\nAfter Swapping by value, a = " << x << " and b = " << y;
}

void swapr(int &x, int &y) 
{
    int z;
    z = x;
    x = y;
    y = z;
    cout << "\nAfter Swapping by reference, a = " << x << " and b = " << y;
}

void swapa(int *p, int *q) 
{
    int r;
    r = *p;
    *p = *q;
    *q = r;
    cout << "\nAfter Swapping by address, a = " << *p << " and b = " << *q;
}