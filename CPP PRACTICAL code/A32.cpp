#include <iostream>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;
int findlargest(int *P, int *Q, int *R);

int main() 
{
    int a,b,c,*I,*J,*K;

    cout << "\n Enter Three Number :";
    cin >> a >> b >> c;

    I=&a;
    J=&b;
    K=&c;   
    int large = findlargest(I,J,K);    

    std::cout << "The largest number among " << a << ", " << b << ", and " << c << " is: " << large;
    getch();
}
int findlargest(int *P, int *Q, int *R)
{
    int largest = *P;

    if (*Q > largest) {
        largest = *Q;
    }
    if (*R > largest) {
        largest = *R;
    }
    return largest;
}