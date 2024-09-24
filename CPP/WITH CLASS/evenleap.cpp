#include<iostream>
using namespace std;
class evenoddcheck{
    private:
        int num;
    public :
        void input();
        void evenodd();
};
class leapyear{
    private:
        int num;
    public :
        void input();
        void leap();
};
int main(){
    evenoddcheck F;
    leapyear L;
    F.input();
    F.evenodd();
    L.input();
    L.leap();
    return 0;
}
void evenoddcheck :: input(){

    cout << " Enter Number to check given number is even or odd= ";
    cin >> num;
}
void evenoddcheck :: evenodd(){
    if (num % 2 == 0)
    {
        cout << " \nGIVEN NUMBER IS EVEN";
    
    }
    else
        cout << "\nGIVEN NUMBER IS ODD";
}
void leapyear :: input(){

    cout << "\nEnter Year to check given year is leap year or not = ";
    cin >> num;
}
void leapyear :: leap(){
    if (num % 4 == 0)
    {
        cout << " \nGIVEN YEAR IS LEAP YEAR = " << num;
    }
    else
        cout << "\nGIVEN YEAR IS NOT LEAP YEAR = "<< num;
}