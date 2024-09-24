#include <iostream>
using namespace std;

class A{

public:
    display1(){
    cout<<"Class A"<<endl;
}
};

class B : virtual public A{       //or public virtual A

public:
    display2(){
    cout <<"Class B"<<endl;
}
};

class C :  public virtual A{      //or public virtual A

public:
    display3(){
    cout <<"Class C"<<endl;
}
};

class D : public C, public B{

public:
    display4(){
    cout <<"Class D"<<endl;
}
};

int main(){

D obj;
obj.display1();
obj.display2();
obj.display3();
obj.display4();

return 0;
}