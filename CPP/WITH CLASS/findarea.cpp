/*
        find area of following this-
        area of circle = 3.14*redius*redius;
        area of squre = area*area*area;
        area of triangle = hieght*base/2;
        area of rectriangle = length*width;
        area of triangle using three side(heron's law) = sqrt[s(s-a)(s-b)(s-c)] and s is s= a+b+c/2;
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class area{
    private:
        float redius,area,hieght,base,length,width,a,b,c,s,tem,AR;
    public :
        void circle(){
            cout << "\nEnter redius to find area of circle = ";
            cin >> redius;
            AR = 3.14*redius*redius;
            cout << "\nAREA OF CIRCLE = "<< AR << endl;
        }

        void squre(){
            cout << "\nEnter area to find area of squre = ";
            cin >> area;
            AR = area*area*area;
            cout << "\nAREA OF SQURE = "<< AR << endl;
        }
        void triangle(){
            cout << "\nEnter hieght and base to find area of triangle = ";
            cin >> hieght >> base ;
            AR = (hieght*base)/2;
            cout << "\nAREA OF TRIANGLE = "<< AR << endl;
        }
        void rectriangle(){
            cout << "\nEnter length and width to find area of rectriangle = ";
            cin >> length >> width ;
            AR = length*width;
            cout << "\nAREA OF RECTRIANGLE = "<< AR << endl;
        }
        void triangle_three_side(){
            cout << "\nEnter three side values to find area of triangle using three side = ";
            cin >> a >> b >> c;
            s=(a+b+c)/2;
            tem= s*(s-a)*(s-b)*(s-c);
            AR = sqrt(tem);
            cout << "\nAREA OF TRIANGLE THREE SIDE = "<< AR << endl;
        }
};
class volume{
    private:
        float redius,hieght,area,width,length,VL;
    public:
        void cone(){

            cout << "\nEnter redius and hieght find to volume of cone = ";
            cin >> redius >> hieght;
            VL = (3.14*redius*redius*hieght)/3;
            cout << "\nVOLUME OF CONE = "<< VL << endl;
        }
        void cube(){

            cout << "\nEnter area find to volume of cube = ";
            cin >> area;
            VL = area*area*area;
            cout << "\nVOLUME OF COBE = "<< VL << endl;
        }
        void cuboid(){

            cout << "\nEnter width,length and hieght find to volume of cuboid = ";
            cin >> width >> hieght >> length;
            VL = width*hieght*length ;
            cout << "\nVOLUME OF CUBOID = "<< VL << endl;
        }
        void cylinder(){

            cout << "\nEnter redius and hieght find to volume of cone = ";
            cin >> redius >> hieght;
            VL = (3.14*redius*redius*hieght);
            cout << "\nVOLUME OF CYLINDER = "<< VL << endl;
        }
};
int main(){
    
    area a;
    volume v;
    
    a.circle();
    a.rectriangle();
    a.squre();
    a.triangle();
    a.triangle_three_side();

    v.cone();
    v.cube();
    v.cuboid();
    v.cylinder();

    return 0;
}