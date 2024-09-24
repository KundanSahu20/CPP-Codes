#include<iostream>
using namespace std;
class byrange{
    private :
        int min,max,i,j,k;
    public:
        int prime();
};
int main(){
    byrange check1;
    check1.prime();
    return 0;
}
int byrange::prime()
{
    cout << "\nEnter starting range to print prime number = ";
    cin >> min;
    cout << "\nEnter last range upto print prime number = ";
    cin >> max;
    cout <<"\n***** PRIME NUMBER UPTO "<< min <<" to "<< max <<" *****\n";
    for ( i = min; i <= max; i++ )
    {
        k=0;
        for (j = 2; j <= i/2; j++)
         {
            if ( i % j ==0 )
              {
                k++;
                break;
              }
         }
         if( k == 0 && i !=1)
         {
            cout << i << endl;
         }
   }
}