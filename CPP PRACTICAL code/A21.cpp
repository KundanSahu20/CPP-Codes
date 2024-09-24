#include<iostream>
#include<conio.h>
using namespace std;
class Calculate{
    public :
        static void circle( double redius){
           double AR = 3.14*redius*redius;
            cout << "\nAREA OF CIRCLE = "<< AR << endl;
        }

        static void triangle( double hieght, double base){
           double AR = (hieght*base)/2;
            cout << "\nAREA OF TRIANGLE = "<< AR << endl;
        }
        static void rectangle( double length, double width){
            double AR = length*width;
            cout << "\nAREA OF RECTRIANGLE = "<< AR << endl;
        }
};
int main(){
    
    Calculate C;
    double a,b,c,d,e;
    cout << "\nEnter redius to find area of circle = ";
    cin >> a;
    
    cout << "\nEnter hieght and base to find area of triangle = ";
    cin >> b >> c ;

    cout << "\nEnter length and width to find area of rectriangle = ";
    cin >> d >> e ;

    C.circle(a);
    C.rectangle(b,c);
    C.triangle(d,e);

    getch();
}