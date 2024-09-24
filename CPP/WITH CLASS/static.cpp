#include <iostream>
#include<conio.h>
class Simple {
    private:

    public:
    static int isPrime(int n); 
};

int main() 
{
    int num;

    cout << "Enter a number to check if it's prime: ";
    cin >> num;

    if (Simple::isPrime(num)) 
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
    getch();
}        
 int Simple::isPrime(int n) 
    {
        if (n <= 1) 
        {
            return 0;
        }
        for (int i = 2; i * i <= n; i++) 
        {
            if (n % i == 0) 
            {
                return 0;
            }
        }
        return 1;
    }