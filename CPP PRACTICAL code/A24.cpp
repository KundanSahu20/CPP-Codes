#include <iostream>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;
class Swaping {
public:
    static void swap( int *x, int *y)
    {
        int z=*x;
        *x=*y;
        *y=z;
    }
    static void swap( float *x, float *y)
    {
        float z=*x;
        *x=*y;
        *y=z;
    }
};
int main() 
{
    int a,b;
    float x,y;

    cout<< "\nEnter two int number to swap : ";
    cin >> a >> b;

    cout << "\nEnter two float number to swap :";    
    cin >> x >> y;

    cout << "\n\nBefore swapping: " << endl;
    cout << "int 1 : " << a << "\nint 2 : " << b << endl;
    cout << "float 1 : " << x << "\nfloat 2 : " << y << endl;

    Swaping::swap(&a,&b);
    Swaping::swap(&x,&y);

    cout << "\nAfter swapping: " << endl;
    cout << "int 1 : " << a << "\nint 2 : " << b << endl;
    cout << "float 1 : " << x << "\nfloat 2 : " << y << endl;

    getch();
}