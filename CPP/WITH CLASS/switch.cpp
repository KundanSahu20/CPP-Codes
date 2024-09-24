#include<iostream>
using namespace std;
class scheck
{
private:
    char x;
    int i,j,k,l;
public:
    void vowelcheck();
    void calculeter();
};

void scheck::vowelcheck()
{
    cout << "\nEnter Character to check vowel or not";
    cin >> x;
    switch (x)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    cout << "\n Character is Vowel = "<<x;
    break;

    default:
    cout << "\nCharacter is not vowel = "<<x;
    break;
    }
}
void scheck::calculeter()
{
    cout << "\nEnter Two Number to perform arithmetic task = ";
    cin >> i >> j ;
    cout << "\nEnter Operator to perform task + , - , * , / , % = ";
    cin >> x;
    switch (x)
    {
    case '+':cout << "\n Additoion of given number = "<< i + j;
    break;
    case '-':cout << "\n Subtraction of given number = "<< i - j;
    break;
    case '*':cout << "\n Multiplication of given number = "<< i * j;
    break;
    case '/':cout << "\n division of given number = "<< i / j;
    break;
    case '%':cout << "\n Modules of given number = "<< i % j;
    break;

    default:
    cout << "\nInvaild Operator ";
    break;
    }
}
int main(){
    scheck a;
    a.calculeter();
    a.vowelcheck();
    return 0;
}