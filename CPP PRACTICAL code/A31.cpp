#include <iostream>
#include<conio.h>
using namespace std;

int main() 
{
    int intValue;
    float floatValue;
    void *ptr;

    cout << "\nEnter Integer Value : ";
    cin >> intValue;

    cout << "\nEnter Float Value : ";
    cin >> floatValue;

    ptr = &intValue;
    int IntValue = *((int *)ptr);
    cout << "\nValue of Integer variable using pointer to void : " << IntValue;

    ptr = &floatValue;
    float FloatValue = *((float *)ptr);
    cout << "\nValue of Float variable using pointer to void : " << FloatValue;

    getch();
}