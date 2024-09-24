#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main() 
{
    cout << "\n\t\tNUMBER SYSTEM 1 TO 25 IN DECIMAL , OCTAL , HEXA-DECIMAL"<< endl;
    cout << "\nDecimal :    ";
    for (int i = 1; i <= 25; ++i) 
    {
        cout << setw(3) << dec << i;
    }
    cout << "\nOctal :      ";
    for (int i = 1; i <= 25; ++i) 
    {
        cout << setw(3) << oct << i;
    }
    cout << "\nHexadecimal :";
    for (int i = 1; i <= 25; ++i) 
    {
        cout << setw(3) << hex << i;
    }
    getch();
}