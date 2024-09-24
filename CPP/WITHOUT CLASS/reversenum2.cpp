#include<iostream>
using namespace std;
class reverse{
    private:
        int i,j,k,l;
        int num,rem,sum=0;
    public:
        void reversenum();
};
void reverse::reversenum(){
    cout << "\nEnter Number to perform reverse task :: ";
    cin >> num;
    l=num;
    do
    {
        rem=num%10;
        sum= sum*10 + rem;
        num = num/10;
    }
    while(num!=0);
    cout << "\n Reverse Value is ::"<< sum;
    k= l%10;
    while(l>0)
    {
        j= l % 10;
        l = l/10;
    }
    cout << "\nfirst number of given number is :: "<<j;
    cout << "\nlast number of given number is :: "<< k;
}
int main(){
    
    reverse r1;
    r1.reversenum();
    return 0;
}