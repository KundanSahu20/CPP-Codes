#include<iostream>
using namespace std;
int main() {
    int a = 7, b = 7, c = 15;
    cout << a << " == " << b << " is " << (a == b) << endl;
    cout << a << " == " << c << " is " << (a == c) << endl;
    cout << a << " >= " << b << " is " << (a >= b) << endl;
    cout << a << " >= " << c << " is " << (a >= c) << endl;
    cout << a << " <= " << b << " is " << (a <= b) << endl;
    cout << a << " <= " << c << " is " << (a <= c) << endl;
    cout << a << " != " << b << " is " << (a != b) << endl;
    cout << a << " != " << c << " is " << (a != c) << endl;
    cout << a << " < " << b << " is " << (a < b) << endl;
    cout << a << " < " << c << " is " << (a < c) << endl;
    cout << a << " > " << b << " is " << (a > b) << endl;
    cout << a << " > " << c << " is " << (a > c) << endl;
    
    return 0;
}
