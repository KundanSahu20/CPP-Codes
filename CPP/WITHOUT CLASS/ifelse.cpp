#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout << "Enter Num 1 for male and 2 for female = "<< endl;
    cin >> a;
    if (a == 1)
    {
        cout << "You Choose 1 for Male"<< endl;
    }
    else if (a == 2)
    {
        cout << "You Choose 2 for Female" << endl;
    }
    else
    {
        cout << " You Choose Another Number plz select 1 or 2" << endl;
    }
    return 0;
}