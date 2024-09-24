#include<iostream>
using namespace std;

class udemo
{
   private:
            int num;
   public:
            udemo(int n)
           {
                 num=n;
           }
           udemo operator ++(void);
           int display(void);
};

udemo udemo :: operator ++()
{
       num=num+1;
}

int udemo :: display(void)
{
       return num;
}

int main()
{
     udemo obj(5);
     cout<<"\nNumber before applying operator is : "<<obj.display();
     ++obj;  
     cout<<"\nNumber after applying operator is : "<<obj.display();

     return 0;   
}
