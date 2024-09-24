#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }

    int getArea() {
        return width * height;
    }
};

int main() {
    Rectangle myRect;
    myRect.setDimensions(5, 3);
    cout << "Area of rectangle: " << myRect.getArea() << endl;

    return 0;
}