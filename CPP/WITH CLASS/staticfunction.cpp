#include<iostream>
using namespace std;
class demo{
    int x;
    static int y;
    public:
        void getdata(int a){
            x=a;
            y=y+1;
        }
        void show(){
            cout<< "\nx= "<<x<<"\ny= "<<y;
        }
        static void abc(){
            cout << "\nstatic function call ";
            cout << "\ny= "<<y;                
        }
};
int demo::y;
int main(){
    demo aa,bb;
    aa.getdata(10);
    bb.getdata(50);
    aa.show();
    bb.show();
    demo::abc();
    return 0;
}