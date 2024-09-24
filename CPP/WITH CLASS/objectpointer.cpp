#include<iostream>
using namespace std;
class Add{
    int a,b;
    public:
    void display(){
        a=100;
        b=100;
        int c= a+b;
        cout<<"Addition of a and b ="<<c;
    }
};

int main(){
    Add a1;
    this->display();    
    return 0;
}