#include <iostream>
#include<conio.h>
using namespace std;

inline int Find_Minimum(int a, int b) 
{
    return (a < b) ? a : b;
}

int main() 
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int min = Find_Minimum(num1, num2);

    cout << "Minimum value: " << min << endl;
    getch();

}
