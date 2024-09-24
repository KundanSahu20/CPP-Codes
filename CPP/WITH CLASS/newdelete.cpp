// Array of Pointers to Objects
#include <iostream>
using namespace std;
#include <conio.h>

class person  {                   
    protected:
        char name[40];             
    public:
        void setName()          
        {
            cout << "Enter name: "; 
            cin >> name;
        }
        void printName()     
        {
            cout << "\n   Name is:" << name;
        }
};

int main()
{
    person* ptr[100]; 
    int n = 0;
    char choice;
    do
    {
        ptr[n] = new person;
        ptr[n]->setName();  
        n++;
        cout << "Enter another (y/n)? ";
        cin >> choice;
    }
    while( choice=='y' );               
    for(int j=0; j<n; j++)              
    {                                   
        cout << "\nPerson number" << (j+1);
        ptr[j]->printName();
    }   

    while(n)           	
        delete ptr[--n]; 
    return 0;
}