#include<iostream>
#include<string.h>
using namespace std;

class adds
{
private:
    char s1[100], s2[100];  // Use character arrays instead of strings
public:
    adds( char s3[], char s4[])
    {
        strcpy(this->s1, s3);
        strcpy(this->s2, s4);
    }
    void operator+()
    {
        cout << "\nAddition of Two String : " << strcat(s1, s2);
    }
};

int main() {
    char x1[100], x2[100];  // Use character arrays instead of strings
    cout << "\nEnter String : ";
    cin.getline(x1, sizeof(x1));
    cout << "\nEnter Second String : ";
    cin.getline(x2, sizeof(x2));
    adds a1(x1, x2);
    +a1;
    return 0;
}
