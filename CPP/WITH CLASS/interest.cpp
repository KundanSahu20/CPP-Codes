/*
Simple Interest SI = (Principal*Rate*Time)/100;
and 
Compound interest CI = Principal(1+ rate/100)^time - Principal; 
*/
#include<iostream>
using namespace std;
class Interest{
    private:
        int time;
        double principal,rate;
        double SI,CI;
    public:
        void simpleinterrest();
        void compoundinterest();
};
int main(){
    Interest I;   
    I.compoundinterest();
    I.simpleinterrest();
    return 0;
}
void Interest ::compoundinterest(){
    double i,j,k;
    cout <<"\nEnter Principal Amount,Interest Rate and Time Peroid to calculate Compound Interest = ";
    cin >> principal >> rate >> time;
    k = 1+(rate/100);
    j = 1;
    for ( i = 0; i < time ; i++)
    {
        j = j*k;
    }
    CI = (principal*j)- principal;
    cout << "\nCOMPOUND INTEREST = "<< CI << endl;
}
void Interest ::simpleinterrest(){
    cout <<"\nEnter Principal Amount,Interest Rate and Time Peroid to calculate Simple Interest = ";
    cin >> principal >> rate >> time;
    SI = (principal*rate*time)/100;
    cout << "\nSIMPLE INTEREST = "<< SI << endl;
}