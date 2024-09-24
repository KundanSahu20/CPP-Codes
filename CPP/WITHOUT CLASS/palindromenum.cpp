#include<iostream>
using namespace std;
class palindrome{
    private:
        int i,j,k,l;
        int num,rem,sum=0;
    public:
        void palindromenum();
};
void palindrome::palindromenum(){
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
    if( l==sum )
    cout << "\n Given Number "<< sum <<" is palindrome";
    else
    cout << "\n Given Number "<< sum <<" is not palindrome";
}
int main(){
    
    palindrome r1;
    r1.palindromenum();
    return 0;
}