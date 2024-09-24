#include<iostream>
using namespace std;
class demo{
    private:
        int x,y;
        static int z;
    public:
        void getdata(int a, int b){
            x=a;
            y=b;
            z=z+1;
        }
        void putdata(){
            cout<<"\nx= "<<x<<"\ny= "<<y<<"\nz= "<<z;
        }
};
int demo::z;
int main(){
    demo a1,a2;
    a1.getdata(5,8);
    a2.getdata(99,20);
    a1.putdata();
    a2.putdata();
    return 0;
}