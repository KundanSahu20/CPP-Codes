#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class adds
{
private:
    char s1[30],s2[30];
public:
    adds(char s3[],char s4[])
    {
        strcpy(this->s1,s3);
        strcpy(this->s2,s4);
    }
    void operator+()
    {
        cout << "\nAddition of Two String : "<< strcat(s1,s2);
    }
};

int main(){
    char x1[30],x2[30];
    cout << "\nEnter String : ";
    cin >> x1;
    cout << "\nEnter Second String : ";
    cin >> x2;
    adds a1(x1,x2);
    +a1;
    return 0;
}