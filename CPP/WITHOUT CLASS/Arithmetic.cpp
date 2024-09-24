#include<iostream>
using namespace std;

int main(){
    int Num_1,Num_2;
    int Add,Sub,Multi,Module;
    float Division;

    cout<< "Enter Two Number = "<< endl ;
    cin >> Num_1 >> Num_2;

    Add = Num_1 + Num_2;
    Sub = Num_1 - Num_2;
    Multi = Num_1 * Num_2;
    Division = Num_1 / Num_2;
    Module = Num_1 % Num_2;

    cout<< "Addition of Num_1 and Num_2 is = "<< Add <<endl ;
    cout<< "Subtraction of Num_1 and Num_2 is = "<< Sub <<endl ;
    cout<< "Multiplecation of Num_1 and Num_2 is = "<< Multi <<endl ;
    cout<< "Division of Num_1 and Num_2 is = "<< Division <<endl ;
    cout<< "Modules of Num_1 and Num_2 is = "<< Module <<endl ;

    return 0;
}