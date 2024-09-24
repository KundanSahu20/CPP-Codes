#include<iostream>
using namespace std;
class array{
    private :
        int a,b,c;
        int x[10];
    public:
        int arrsearch();
};
int array::arrsearch(){
    cout<< "\nEnter Ten Value =";
    for( a=0;a<10;a++)
    {
        cin >> x[a];
    }
    cout << "\nEnter Value to search = ";
    cin >> b;
    c = 0;
    for( a=0;a<10;a++)
    {
        if( x[a] == b)
        {
            cout << "\nValue is avalable in x["<< a+1 <<"] and value is ="<< b << endl;
            c++;
        }
    }
    if( c == 0)
    {
         cout << "\n value is not avalable";    
    }
    return 0;

}
int main(){
    array a1;
    a1.arrsearch();
    return 0;
}