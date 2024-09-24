#include<iostream>
#include<conio.h>
using namespace std;
class employee{
    private: 
        char name[20];
        int eid,sal;
    public:
        void einput();
        void eoutput();
};

int main(){
    int i;
    employee e1[3],*ep;
    for( i=0; i<3; i++ )
    {
        ep=&e1[i];
        cout << "\nEnter Details of Employee "<< i+1;
        ep->einput();
        ep++;
    }
    for( i=0; i<3; i++ )
    {
        ep=&e1[i];
        cout << "\n Details of Employee "<< i+1;
        ep->eoutput();
        ep++;
    }
    getch();
}
void employee::einput()
{
    cout <<"\nEnter Id = ";
    cin >> eid;
    cout << "\nEnter Name = ";
    cin >> name;
    cout <<"\nEnter Salary = ";
    cin >> sal;
}
void employee::eoutput()
{
    cout << "\nID = "<< eid << endl;
    cout << "Name = "<< name << endl;
    cout << "Salary = "<< sal << endl;
}