#include<iostream>
using namespace std;
class Base{
    public:
       void print(){
            cout<< " Base Class"<< endl;
        }
};
class Derived:public Base{    
    public:
       void print(){
            cout<< " Derived Class"<< endl;
        }
};
int main(){
    Derived obj;
    obj.print();
    obj.Base::print();
    return 0;
}