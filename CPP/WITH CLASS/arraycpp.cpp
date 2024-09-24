#include<iostream>
using namespace std;
class matrix 
{
    private:
        int i,j,k;
        int x[3][3],y[3][3],z[3][3];
    public:
      void enter (){
        cout << "Enter 9 Value in First Matrix-X :: ";
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                cin >> x[i][j];
            }
            
        }
       cout << "Enter 9 Value in Second Matrix-Y :: ";
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                cin >> y[i][j];
            }
            
        }
      }
      void display (){
        cout << " \nValue of First Matrix-X :: ";
        for ( i = 0; i < 3; i++)
        {
            cout << "\n";
            for ( j = 0; j < 3; j++)
            {
                cout <<"  "<<x[i][j];
            }
            
        }
       cout << "\nValue in Second Matrix-Y :: ";
        for ( i = 0; i < 3; i++)
        {
            cout << "\n";
            for ( j = 0; j < 3; j++)
            {
                cout <<"  "<< y[i][j];
            }
            
        }
    }
    void addtion(){
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                z[i][j]=x[i][j]+y[i][j];
            }
            
        }

        cout << "\nAddtion of matrix x and y :: \n";
        for ( i = 0; i < 3; i++)
        {
            cout << "\n";
            for ( j = 0; j < 3; j++)
            {
                cout <<"  " <<z[i][j];
            }
            
        }
        
    }
        void subtraction(){
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                z[i][j]=x[i][j]-y[i][j];
            }
            
        }

        cout << "\nSubtraction of matrix x and y :: \n";
        for ( i = 0; i < 3; i++)
        {
            cout << "\n";
            for ( j = 0; j < 3; j++)
            {
                cout <<"  " <<z[i][j];
            }
            
        }
        
    }
    void multiplication(){
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                z[i][j]=0;
                for ( k = 0; k < 3; k++)
                {
                    z[i][j]=z[i][j]+x[i][k]*y[k][j];
                }
            }
            
        }

        cout << "\nMultiplication of matrix x and y :: \n";
        for ( i = 0; i < 3; i++)
        {
            cout << "\n";
            for ( j = 0; j < 3; j++)
            {
                cout <<"  " <<z[i][j];
            }
            
        }
    }

};
int main()
{
    matrix m;

    m.enter();
    m.display();
    m.addtion();
    m.subtraction();
    m.multiplication();
    return 0;
}