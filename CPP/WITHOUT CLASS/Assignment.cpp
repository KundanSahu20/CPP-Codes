#include<iostream>
using namespace std;

int main(){
    
    int NUM_1 = 10, NUM_2 = 15;

    cout << "VALUE OF NUM_1 =" << NUM_1 << " and NUM_2 =" << NUM_2 << endl;

    cout << NUM_1 << " += " << NUM_2 << " =" << (NUM_1 += NUM_2) << endl;
    cout << NUM_1 << " -= " << NUM_2 << " =" << (NUM_1 -= NUM_2) << endl;
    cout << NUM_1 << " *= " << NUM_2 << " =" << (NUM_1 *= NUM_2) << endl;
    cout << NUM_1 << " /= " << NUM_2 << " =" << (NUM_1 /= NUM_2) << endl;
    cout << NUM_1 << " %= " << NUM_2 << " =" << (NUM_1 %= NUM_2) << endl;
    cout << NUM_1 << " >= " << NUM_2 << " =" << (NUM_1 >= NUM_2) << endl;
    cout << NUM_1 << " <= " << NUM_2 << " =" << (NUM_1 <= NUM_2) << endl;

    return 0;
}