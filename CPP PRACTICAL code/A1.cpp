#include<iostream> 
#include<conio.h>
using namespace std; 
int fact1(int x);
int fact(int a,int b);

int main() { 
    int i,j,k; 
    cout << "******** PATTERN 1 ********\n";
    cout<<"ABCDEFG\n"; 
    for(i=1;i<=4;i++) 
    { 
        for (j=1;j<=4-i;j++) 
        cout<<char(64+j); 
        for (k=1;k<=2*i-1;k++) 
        cout<<" "; 
        for (j=4-i;j>=1;j--) 
        cout<<char(72-j); 
        cout <<endl; 
    } 
    cout << "******** PATTERN 2 ********\n"<< endl;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }
    cout << "******** PATTERN 3 ********\n"<< endl;
    for ( i = 1; i < 5; i++)
    {
        for ( j = 4; j > i; j--)
        {
            cout <<" ";
        }
        for ( k = 0; k < i; k++)
        {
            cout <<"* ";
        }   
        cout << endl;
    }
    cout << "******** PATTERN 4 ********\n"<< endl;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 4-i; j++)
        {
            cout << " ";
        }
        for ( k = 0; k <= i; k++)
        {
            cout << fact(i,k) <<" ";
        }
        cout << endl;
    }
    getch(); 
} 
int fact1(int x)
{
    if(x == 0 || x == 1)
    return 1;
    else
    return x*fact1(x-1);
}
int fact(int a,int b)
{
    return fact1(a) / (fact1(b)*fact1(a-b));
}