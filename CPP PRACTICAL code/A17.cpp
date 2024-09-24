#include <iostream>
#include <conio.h>
using namespace std;

class Counter 
{
private:
    static int objectCount;
public:
    Counter() {
        objectCount++;
    }
    ~Counter() {
        objectCount--;
    }

    static void displayCount() 
    {
        cout << "Number of objects created: " << objectCount << "\n";
    }
};
int Counter::objectCount = 0;
int main() 
{
    Counter obj1;
    Counter obj2;
    Counter obj3;
    Counter::displayCount();
    {
        Counter obj4;
        Counter obj5;
        Counter::displayCount();
    }
    Counter::displayCount();

    getch();
}