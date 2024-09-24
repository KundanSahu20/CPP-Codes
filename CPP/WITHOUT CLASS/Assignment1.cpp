#include<iostream> 
#include<conio.h>
using namespace std; 
void pattern11();
void pattern12();
void pattern13();
void pattern21();
void pattern22();
void pattern23();
void pattern31();
void pattern32();
void pattern33();
void pattern41();
void pattern42();
void pattern43();
int fact1(int x);
int fact(int a,int b);

void pattern11(){
    int i,j,k; 
    cout << "\n** PATTERN 1 With For loop **";
    cout<<"\nABCDEFG\n"; 
    for(i=1;i<=4;i++) 
    { 
        for (j=1;j<=4-i;j++) 
        cout<<char(64+j); 
        for (k=1;k<=2*i-1;k++) 
        cout<<" "; 
        for (j=4-i;j>=1;j--) 
        cout<<char(72-j); 
        cout <<endl; 
    }    
}
void pattern12(){
    cout << "\n** PATTERN 1 With While loop **"<< endl;
    int i,j,k; 
    i=1; 
    cout<<"ABCDEFG\n"; 
    while(i<=4) 
    {
        j=1; 
        while(j<=4-i) {
        cout<<char(64+j);
        j++; 
        }
        k=1;
        while(k<=2*i-1){
        cout<<" "; 
        k++;
        }
        j=4-i;
        while(j>=1){ 
        cout<<char(72-j); 
        j--;
        }
        cout <<endl; 
        i++;
    }
}
void pattern13(){
    cout << "\n** PATTERN 1 With do-while loop **"<< endl;
    int i,j,k; 
    i=1; 
    cout<<"ABCDEFG\n"; 
    do 
    {
        j=1; 
        do{
        cout<<char(64+j);
        j++; 
        }while(j<=4-i);
        k=1;
        do{
        cout<<" "; 
        k++;
        }while(k<=2*i-1);
        j=4-i;
        do{ 
        cout<<char(72-j); 
        j--;
        }while(j>=1);
        cout <<endl; 
        i++;
    }while(i<=3);
}
void pattern21(){
    int i,j,k; 
    cout << "** PATTERN 2 with for loop **\n"<< endl;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }  
}
void pattern22(){
    cout << "\n** PATTERN 2 With While loop **"<< endl;
    int i,j,k;
    i=0; 
    while(i < 4)
    {
        j=0;
        while(j <= i)
        {
            cout << j+1;
            j++;
        }
        cout << endl;
        i++;
    }  
}
void pattern23(){
    cout << "\n** PATTERN 2 With do-while loop **"<< endl;
    int i,j,k; 
    i=0; 
    do
    {
        j=0;
        do
        {
            cout << j+1;
            j++;
        }while(j <= i);
        cout << endl;
        i++;
    }while(i < 4);
}
void pattern31(){
    int i,j,k; 
    cout << "** PATTERN 3 with for loop **\n"<< endl;
    for ( i = 1; i < 5; i++)
    {
        for ( j = 4; j > i; j--)
        {
            cout <<" ";
        }
        for ( k = 0; k < i; k++)
        {
            cout <<"* ";
        }   
        cout << endl;
    }   
}
void pattern32(){
    cout << "\n** PATTERN 3 With While loop **"<< endl;
    int i,j,k; 
    i=1; 
    while(i < 5)
    {
        j=4;
        while(j > i)
        {
            cout <<" ";
            j--;
        }
        k=0;
        while(k < i)
        {
            cout <<"* ";
            k++;
        }   
        cout << endl;
        i++;
    }  
}
void pattern33(){
    cout << "\n** PATTERN 3 With do-while loop **"<< endl;
    int i,j,k; 
    i=1; 
    do
    {
        j=4;
        do 
        {
            cout <<" ";
            j--;
        }while(j > i);
        k=0;
        do 
        {
            cout <<"* ";
            k++;
        }  while(k < i); 
        cout << endl;
        i++;
    } while(i < 5);
}
void pattern41(){
    int i,j,k; 
    cout << "** PATTERN 4 with for loop **\n"<< endl;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 4-i; j++)
        {
            cout << " ";
        }
        for ( k = 0; k <= i; k++)
        {
            cout << fact(i,k) <<" ";
        }
        cout << endl;
    } 
}
void pattern42(){
    cout << "\n** PATTERN 4 With While loop **"<< endl;
    int i,j,k; 
    i=0;
    while(i < 5)
    {
        j=0;
        while(j < 4-i)
        {
            cout << " ";
            j++;
        }
        k=0;
        while(k <= i)
        {
            cout << fact(i,k) <<" ";
            k++;
        }
        cout << endl;
        i++;
    } 
}
void pattern43(){
    cout << "\n** PATTERN 4 With do-while loop **"<< endl;
    int i,j,k; 
    i=0;
    do
    {
        j=0;
        do
        {
            cout << " ";
            j++;
        }while(j < 4-i);
        k=0;
        do 
        {
            cout << fact(i,k) <<" ";
            k++;
        }while(k <= i);
        cout << endl;
        i++;
    } while(i < 5);
}
int fact1(int x)
{
    if(x == 0 || x == 1)
    return 1;
    else
    return x*fact1(x-1);
}
int fact(int a,int b)
{
    return fact1(a) / (fact1(b)*fact1(a-b));
}
int main() 
{ 
    int i,j,k,l; 
    cout << "\nEnter Number for Print Pattern 1 => 11 or 12 or 13 :: ";
    cin >> i;
    cout << "\nEnter Number for Print Pattern 1 => 21 or 22 or 23 :: ";
    cin >> j;
    cout << "\nEnter Number for Print Pattern 1 => 31 or 32 or 33 :: ";
    cin >> k;
    cout << "\nEnter Number for Print Pattern 1 => 41 or 42 or 43 :: ";
    cin >> l;

    if( i == 11)
    pattern11();
    else if( i == 12)
    pattern12();
    else if( i == 13)
    pattern13();
    else
    cout <<"\nInvalid Number Try Again with 11 12 13 ";

    if( j == 21)
    pattern21();
    else if( j == 22)
    pattern22();
    else if( j == 23)
    pattern23();
    else
    cout <<"\nInvalid Number Try Again with 21 22 23 ";

    if( k == 31)
    pattern31();
    else if( k == 32)
    pattern32();
    else if( k == 33)
    pattern33();
    else
    cout <<"\nInvalid Number Try Again with 31 32 33 ";

    if( l == 41)
    pattern41();
    else if( l == 42)
    pattern42();
    else if( l == 43)
    pattern43();
    else
    cout <<"\nInvalid Number Try Again with 41 42 43 ";

    getch();
}