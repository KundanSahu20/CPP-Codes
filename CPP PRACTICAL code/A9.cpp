#include<iostream>
#include<conio.h>
using namespace std;
class Sarray{
    private:
    int x[5],i,j,c;
    public:
    Sarray( int elements[5])
    {
        for (int i=0; i<5; i++){
            x[i]=elements[i];
        }
    }
    void sort();
    void search();
};
void Sarray::sort()
{
    for(i=0; i<4; i++)
    {
        for(j=0; j<4-i; j++)
        {
            if(x[j] > x[j+1])
            {
                c=x[j];
                x[j]=x[j+1];
                x[j+1]=c;
            }
        }
    }
    
    cout<<"\n Sorted Values ";
    for(i=0; i<5; i++)
    cout << "\n "<< x[i];
    cout<<"\n Largest value of array ="<< x[4];
}
void Sarray::search()
{
    c=0;
    cout<<"\n Enter number to saerch =";
    cin>>j;
    for(i=0; i<5; i++)
    {
	if(x[i]==j)
	{
	cout<<"\n Number is present in x["<<i<<"]="<<x[i];
	c++;
	}
	}
	if(c==0)
	cout<<"\n Number is not present";
}
int main()
{
    int elements[5];
    cout<< "\n Enter 5 integer data =";
    for(int i=0; i<5; i++)
    cin >> elements[i];
    Sarray a1(elements);
    a1.sort();
    a1.search();
    getch();
}