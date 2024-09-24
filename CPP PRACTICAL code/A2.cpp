#include<iostream> 
#include<conio.h>
using namespace std; 
void pattern11();
void pattern12();
void pattern13();

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
int main() { 
    int i; 
    cout << "\nEnter Number for Print Pattern 1 => 11 or 12 or 13 :: ";
    cin >> i;
    if( i == 11)
    pattern11();
    else if( i == 12)
    pattern12();
    else if( i == 13)
    pattern13();
    else
    cout <<"\nInvalid Number Try Again ";
    getch();
}