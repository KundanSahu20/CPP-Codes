#include <iostream>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;
class Sarray {
private:
    int x[5],i,j,c;
public:
    Sarray()
    {
        x[0] = 64;
        x[1]= 25;
        x[2]= 12;
        x[3]= 22;
        x[4]= 11;
    }
    void sort();
};
void Sarray::sort()
{
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(x[j] > x[j+1])
            {
                c=x[j];
                x[j]=x[j+1];
                x[j+1]=c;
            }
        }
    }
    
    cout<<"\n Sorted Values ";
    for(i=0; i<5; i++)
    cout << "\n "<< x[i];
    cout<<"\n Largest value of array ="<< x[4];
}
int main() {
    Sarray a;
    a.sort();
    return 0;
}