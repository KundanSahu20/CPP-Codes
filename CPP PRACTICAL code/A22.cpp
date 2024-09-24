#include <iostream>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;

class ArraySort {
public:
    static void sort(float X[5])
    {
        for (int i = 0; i < 4; i++) 
        {
            for (int j = 0; j < 4 - i; j++)
             {
                if (X[j] > X[j + 1])
                {
                    float temp = X[j];
                    X[j] = X[j + 1];
                    X[j + 1] = temp;
                }
            }
        }
    }

    static void sort(int Y[5])
    {
        for (int i = 0; i < 4; i++) 
        {
            for (int j = 0; j < 4 - i; j++) 
            {
                if (Y[j] > Y[j + 1]) 
                {
                    int temp = Y[j];
                    Y[j] = Y[j + 1];
                    Y[j + 1] = temp;
                }
            }
        }
    }
};

int main() 
{
    float floatArray[5];
    int intArray[5];
    
    cout << "\nEnter float array for sorting : ";
    for (int i = 0; i < 5; i++) 
    {
        cin >> floatArray[i];
    }

    cout << "\nEnter integer array for sorting : ";
    for (int i = 0; i < 5; i++) 
    {
        cin >> intArray[i];
    }

    clrscr();
    cout << "\nUnsorted float array: ";
    for (int i = 0; i < 5; i++) 
    {
        cout  << "\n "<< floatArray[i];
    }

    ArraySort::sort(floatArray);

    cout << "\nSorted float array: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << "\n "<< floatArray[i];
    }

    cout << "\nUnsorted integer array: ";
    for (int i = 0; i < 5; i++) 
    {
        cout  << "\n "<< intArray[i];
    }

    ArraySort::sort(intArray);

    cout << "\nSorted integer array: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << "\n "<< intArray[i];
    }

    getch();
}