#include<iostream>
using namespace std;
class number{
    private:
        int a;
    public:
        void getdata(void);
        int task(void);
        void display(void);
};

void number::getdata(void)
{
    cout<<"\nEnter Number =";
    cin >> a;
}
int number::task(void){
    int x;
    if(a%5==0)
    {
        x=0;
        return x;
    }
    else
    {
        x=a%5;
        return x;
    }
}

void number::display(){
    cout << "\nReminder is = "<<task() << endl;
}
int main(){
    number num;
    num.getdata();
    num.display();
    return 0;
}