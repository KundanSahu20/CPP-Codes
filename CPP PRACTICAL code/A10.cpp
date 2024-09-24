#include<iostream>
#include<conio.h>
using namespace std;
class Simple{
    public:
    static int fact(int y)
    {
        if( y <= 1)
        {
            return 1;
        }
        return y * fact(y - 1);        
    }
    static int prime(int x)
    {
        int a,b;
        if ( x <= 1)
        {
            return 0;
        }
        else
         for ( a=2; a<=x/2; a++)
         {
            if( x%a == 0)
            {
                return 0;
            }
         }
         return 1;
    }
    static int fibo(int z)
    {
        int a=0,b=1,c;
        cout << "Fibo series upto "<<z;
        for (int i=0; i<z; i++)
        {
            if ( i <= 1)
            {
                c=i;
            }
            else
            c= a+b;
            a=b;
            b=c;
        cout <<"\n"<<c;
        }

    }
};
int main()
{
    int num;
    cout << "\nEnter Number To Find Factorial = ";
    cin >> num; 
    int n = Simple::fact(num);
    cout << "Factorial of "<< num << " is ="<< n;
    
    cout << "\nEnter Number To Check Number is prime or not  = ";
    cin >> num;
    int x = Simple::prime(num);
    if (x==0)
        cout << "\nGiven Number is Not prime";
    else
        cout << "\nGiven Number is Prime ";
    
    cout << "\nEnter Number To Print Fibo Series = ";
    cin >> num;
    Simple::fibo(num);

    getch();

}