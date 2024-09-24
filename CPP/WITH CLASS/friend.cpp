#include <iostream>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;
class Greatest {
private: 
        int a,b;
public:
    void getdata();
    friend void max(Greatest g);
};
void Greatest::getdata(){
    cout << "\nEnter Two Number to Check Which is Greatest : ";
    cin >> a >> b;
}
void max(Greatest g){
    if(g.a > g.b )
    cout << "\n a is Greatest : "<< g.a ;
    else 
    cout << "\n b is Greatest : "<< g.b ;
}
int main() {
    Greatest g1;
    g1.getdata();
    max(g1);
    getch();
}