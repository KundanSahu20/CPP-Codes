#include<iostream>
using namespace std;

class myAbstractClass
{

  public:
    int Num;
    virtual void setNum(int n) = 0;

    virtual void display()
    {
          cout<<"Num is : "<<Num;
    }
};

class myClass : myAbstractClass
{

public:
    void setNum(int n)
    {
        this->Num = n;
        this->display();
    }
};

int main()
{
   myClass obj;
   obj.setNum(5);
   return 0;
}
