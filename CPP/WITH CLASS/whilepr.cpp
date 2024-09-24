#include<iostream>
using namespace std;
class evodbyplus{
    private : 
        int a,b,c;
    public:
        void even();
        void odd();
};
class evodbymodule{
    private : 
        int a,b,c;
    public:
        void even();
        void odd();
};
class table
{
    private:
        int a,b,c;
    public:
        void tablemul();
};

int main(){
    evodbymodule evodprint;
    evodbyplus evod;
    table t1;
    evod.even();
    evod.odd();
    evodprint.even();
    evodprint.odd();
    t1.tablemul();

    return 0;
}
void evodbyplus::even(){
    cout << "\nEnter Range to print even number upto given range = ";
    cin >> a;
    cout << "\nEven Number Upto = "<< a ;
    b = 2;
    while ( b <= a)
    {
        cout << "\n" << b;
        b = b+2;
    }
    
}
void evodbyplus::odd(){
    cout << "\nEnter Range to print odd number upto given range = ";
    cin >> a;
    cout << "\nodd Number Upto = "<< a ;
    b = 1;
    while ( b <= a)
    {
        cout << "\n" << b;
        b = b+2;
    }
}
void evodbymodule::even(){
    cout << "\nEnter Range to print even number upto given range = ";
    cin >> a;
    cout << "\nEven Number Upto = "<< a ;
    b=1;
    while ( b <= a)
    {
        if (b%2==0)
        cout << "\n" << b;        
        b++;
    }
}
void evodbymodule::odd(){
    cout << "\nEnter Range to print odd number upto given range = ";
    cin >> a;
    cout << "\nOdd Number Upto = "<< a ;
    b=1;
    while ( b <= a)
    {
        if (b%2!=0)
        cout << "\n" << b;        
        b++;
    }
}
void table::tablemul()
{
    cout << "\nEnter Number to print table = ";
    cin >> a;
    cout << "\n Table of given number :"<< a ;
    b=1;
    while ( b <= 10 )
    {
        c = b*a;
        cout <<"\n"<< a <<"*" << b <<"=" << c;
        b++;
    }
    
}