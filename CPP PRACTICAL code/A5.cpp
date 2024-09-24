#include<iostream>
#include<conio.h>
#define clrscr(); system("cls");
using namespace std;

int i,j,k;
    int x[3][3],y[3][3],z[3][3];

void display(int z[3][3]);
void addtion(int x[3][3],int y[3][3], int z[3][3]);
void subtraction(int x[3][3],int y[3][3], int z[3][3]);
void multiplication(int x[3][3],int y[3][3], int z[3][3]);

int main()
{

    cout << "Enter 9 Value in  Matrix-1 :: ";
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin >> x[i][j];
        }        
    }
    cout << "Enter 9 Value in Matrix-2 :: ";
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin >> y[i][j];
        }            
    }
    clrscr();
    cout << "Matrix 1:" << endl;
    display(x);

    cout << "Matrix 2:" <<endl;
    display(y);

    addtion(x,y,z);
    cout << "\nAddtion of matrix x and y :: \n";
    display(z);

    subtraction(x,y,z);
    cout << "\nSubtraction of matrix x and y :: \n";
    display(z);

    multiplication(x,y,z);
    cout << "\nMultiplication of matrix x and y :: \n";
    display(z);
    
    getch();
}
void display (int z[3][3]){
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout <<"  "<<z[i][j];
        }
        cout << "\n";            
    }
}
void addtion(int x[3][3],int y[3][3], int z[3][3]){
    for ( i = 0; i < 3; i++)
     {
         for ( j = 0; j < 3; j++)
        {
           z[i][j]=x[i][j]+y[i][j];
        }
            
    }
  
}
void subtraction(int x[3][3],int y[3][3], int z[3][3]){
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            z[i][j]=x[i][j]-y[i][j];
        }
            
    }
 
}
void multiplication(int x[3][3],int y[3][3], int z[3][3]){
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

}