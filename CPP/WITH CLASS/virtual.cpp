#include <iostream>
using namespace std;
class A {
    public:
        virtual void display()
            {
                cout << "\nBASE CLASS ";
            }
};

class B : public A {
    public:
        void display()
            {
                cout << "\nDERIVED CLASS ";
            }
};
int main()
{
    A *a,a1;
    B b1;
    
    a=&a1;
    a->display();
    a=&b1;
    a->display();
    return 0;
 }
