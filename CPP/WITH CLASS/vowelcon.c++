#include<iostream>
#include<conio.h>
using namespace std;

class vowelcon
{
private:
    int a,b,c,d,e;
public:
    void reverse();
    void copystr();
    void vowelcount();
};
void vowelcon::copystr()
{
    char str[10],cp[10];
    cout << "\nEnter Sentence to copy in other variable = ";
    cin >> str;
    cout << "\nWITHOUT COPY VALUE OF STR = "<< str;
    a=0;
    while (str[a] != '\0'-1)
    {
        cp[a] = str[a];
        a++;
    }

    cout <<"\nWITH COPY VALUE ON CP = "<<cp;
}
void vowelcon::reverse()
{
    char str[10],cp[10],temp[10];
    cout << "\nEnter Sentence  = ";
    cin >> cp;
    cout << "\nWord Without Reverse = "<< cp;
    a=0;
    while (cp[a] != '\0')
    {
        a++;
    }
    b=a;
    cout << "\nAfter Reverse Word = ";
    while ( b+1 != 0)
    {
        cout << cp[b];
        b--;
    }

}
void vowelcon::vowelcount()
{
    char x[50],y[50];
    cout << "\nEnter Sentence to find how many vowel,consonents and space = ";
    gets(x);
    a=0,b=0,c=0;
    while ( x[b] != '\0')
    {
        if(x[b]=='a'||x[b]=='e'||x[b]=='i'||x[b]=='o'||x[b]=='u'||x[b]=='A'||x[b]=='E'||x[b]=='I'||x[b]=='O'||x[b]=='U')
        {
            a++;
        }

        if( x[b] == ' ')
        {
            c++;
        }
        b++;
    }
    cout << "\nTotal Number of character in sentence = " << b;
    cout << "\nTotal Number of Vowel in sentence= " << a ;
    cout << "\nTotal Number of Consonants in sentence= "<< b-c-a;
    cout << "\nTotal Number of Words in sentence= " << c+1;
}
int main(){
    vowelcon v1,v2;
    v2.vowelcount();
    v1.copystr();
    v1.reverse();
    return 0;
}