#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main() {

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
