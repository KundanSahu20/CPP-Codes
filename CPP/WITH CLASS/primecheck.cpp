#include<iostream>
using namespace std;
class checkprime{
    private:
        int num;
    public :
        int prime();
};
class primecheck{
    private :
        int num;
    public :
        int prime();
};
class byrange{
    private :
        int num,i,j,k;
    public :
        int prime();
};
int main(){
    checkprime check;
    primecheck check1;
    byrange check2;
    check2.prime();
    // check1.prime();
    // check.prime();
    return 0;
}
int checkprime :: prime()
{
    int i,j;
    cout << " Enter Number to Check Given Number is Prime or Not = " << endl;
    cin >> j;
    if ( j == 1 || j == 2)
    {
    goto l2;
    }
    for ( i = 2; i < j ; i++)
    {    
        if(j % i == 0 )
        {
            cout << "Given Number is Not Prime = "<< j << endl;
            goto l1;
        }
    }
    l2:
    cout << "Given Number is Prime Number = "<< j << endl;
    l1:
    return 0;
}
int primecheck::prime()
{
    int i,j;
    cout << " Enter Number to Check Given Number is Prime or Not = " << endl;
    cin >> num;
    for ( i = 2; i < num ; i++)
    {    
        if ( num == 1 || num == 2)
        {
            break;
        }
        if(num % i == 0 )
        {
            cout << "Given Number is Not Prime = "<< num << endl;
            goto l1;
        }
    }
    cout << "Given Number is Prime Number = "<< num << endl;
    l1:
    return 0;   
}

int byrange::prime()
{
    cout << "\nEnter range to print prime number upto given range = ";
    cin >> num;
    cout <<"\n***** PRIME NUMBER UPTO "<< num <<" *****\n";
    for ( i = 1; i <= num; i++ )
    {
        k=0;
        for (j = 2; j <= i/2; j++)
         {
            if ( i % j ==0 )
              {
                k++;
                break;
              }
         }
         if( k == 0 && i !=1)
         {
            cout << i << endl;
         }
   }
}