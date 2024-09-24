#include <iostream>
#include <conio.h>
using namespace std;
class Polar {
    private: 
        float r,angle;
    public:
        void get(){
            cout << "\nEnter Redius :";
            cin >> r;
            cout << "Enter Angle :";
            cin >> angle;
        }
        void display(){
            cout << "\nRedius = "<< r;
            cout << "\nAngle = "<< angle;
        }
        void friend add( Polar p1,Polar p2);
};
void add(Polar p1, Polar p2){
    cout << "\n\nAddition of Redius : "<< p1.r+p2.r;
    cout << "\nAddition of Angle : "<< p1.angle+p2.angle;
}
int main() {
    Polar a,b;
    cout<< "\nEnter first Object Redius and Angle :";
    a.get();
    cout<< "\nEnter Second Object Redius and Angle :";
    b.get();
    cout<< "\nfirst Object Redius and Angle :";
    a.display();
    cout<< "\n\nSecond Object Redius and Angle :";
    b.display();
    add(a,b);
    getch();
}