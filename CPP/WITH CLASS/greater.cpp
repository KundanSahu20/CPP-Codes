#include<iostream>
using namespace std;
class greatest{

    private:
        int i,j,k;
    public:
        void logicalcheck(){
            cout << "\nEnter Three Number to Check Greatest = ";
            cin >> i >> j >> k;
            if( i > j && i > k)
            cout << "\ni is Greatest Value ="<<i;
            else if ( j > k && j > i)
            cout << "\nj is Greatest Value ="<<j;
            else 
            cout << "\nk is Greatest Value ="<<k;
        }

        void nestedcheck(){
            cout <<"\nEnter Three Number To Check Greatest = ";
            cin >> i >> j >> k;
            if( i > j)
            {
                if(i > k)
                cout << "\ni is Greatest Value = "<<i;
                else
                cout << "\nk is Greatest Value = "<<k;
            }
            else
            {
                if(j > k)
                cout << "\nj is Greatest Value = "<<j;
                else 
                cout << "\nk is Greatest Value = "<<k;
            }
        }
};
int main(){
    greatest g1;

    g1.logicalcheck();
    g1.nestedcheck();

    return 0;
}