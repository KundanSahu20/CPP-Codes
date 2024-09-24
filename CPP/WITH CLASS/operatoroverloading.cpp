#include <iostream>
#include <conio.h>
using namespace std;

class OPEV {
private:
    int a, b, c;

public:
    OPEV() {
        a = 100;
        b = 200;
        c = 300;
    }

    void print() {
        cout << "\nValue of A : " << a;
        cout << "\nValue of B : " << b;
        cout << "\nValue of C : " << c;
    }

    OPEV operator+() {
        a= -a;
        b= -b;
        c= -c;
    }
};

int main() 
{
    OPEV O2;
    O2.print();
    +O2;
    O2.print();
    return 0;
}