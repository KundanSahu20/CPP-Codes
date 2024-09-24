#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    int x[10];

    cout << "\nEnter 10 Number = ";
    for (a=0;a<10;a++)
    cin >> x[a];

    
    for (a=0;a<10;a++)
    {
        for(b=0;b<10;b++)
        {
            if( x[b] > x[b+1])
            {
                c=x[b];
                x[b]=x[b+1];
                x[b+1]=c;
            }
        }
    }
    for (a=0;a<10;a++)
    {
        cout << "\n"<< x[a];
    }
    cout << "\nSmallest Value of Array is "<<x[0];
    cout << "\nGreatest Value of Array is "<<x[10];
    return 0;
}