#include<iostream>
using namespace std;
class ABC{
    private:
        int value,ab,c;
    public:
        ABC& add(int ab, int c){
            this->ab=ab;
            this->c=c;
            value=ab+c;
            return *this;
        }
        void di(){
            cout<<"a="<<ab<<" b="<<c<<" value="<<value;
        }
};
int main(){
    ABC a;
    a.add(20,10).di();
    return 0;
}