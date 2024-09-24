#include<iostream>
using namespace std;

class bdemo
{
     private:
             int num;
     public:
            bdemo operator +(bdemo b);
            void setNum(int n);
            int display(void);
};

bdemo bdemo :: operator +(bdemo b)
{
        bdemo bd;
        bd.num =  this->num+b.num;
        return bd;
}

void bdemo :: setNum(int n)
{
        num=n;
}

int bdemo :: display(void)
{
       return num;
}

int main()
{
      bdemo obj1;
      bdemo obj2;
      bdemo obj3;

      obj1.setNum(5);
      obj2.setNum(3);

      cout<<"Value inside obj1 is : "<<obj1.display()<<endl;
      cout<<"Value insdie obj2 is : "<<obj2.display()<<endl;

      obj3 = obj1+obj2;
      cout<<"Value inside obj3 is : "<<obj3.display()<<endl;
      return 0;
}
