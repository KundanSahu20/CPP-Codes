#include<iostream>
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
    employee e,e1[3],*ep;
    for( i=0; i<2; i++ )
    {
        ep=&e1[i];

        ep->einput();
        ep->eoutput();
        ep++;
    }
    return 0;
}
void employee::einput()
{
    cout <<"Enter Employee Id = ";
    cin >> eid;
    cout << "\nEnter Employee Name = ";
    cin >> name;
    cout <<"\nEnter Employee Salary = ";
    cin >> sal;
}
void employee::eoutput()
{
    cout << "ID of Employee = "<< eid << endl;
    cout << "Name Of Employee = "<< name << endl;
    cout << "Salary Of Employee = "<< sal << endl;
}