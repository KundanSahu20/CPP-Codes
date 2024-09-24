#include <iostream>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0){
        real=r;
        imaginary=i;
    }
    Complex add( Complex& other)  
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
    Complex subtract( Complex& other)  
    {
        return Complex(real - other.real, imaginary - other.imaginary);
    }
    Complex multiply( Complex& other)  
    {
        double newReal = real * other.real - imaginary * other.imaginary;
        double newImaginary = real * other.imaginary + imaginary * other.real;
        return Complex(newReal, newImaginary);
    }
    Complex divide( Complex& other)  
    {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        double newReal = (real * other.real + imaginary * other.imaginary) / denominator;
        double newImaginary = (imaginary * other.real - real * other.imaginary) / denominator;
        return Complex(newReal, newImaginary);
    }

    void print()  {
        cout << real;
        if (imaginary >= 0) {
            cout << " + " << imaginary << "i";
        } else {
            cout << " - " << -imaginary << "i";
        }
    }
};

int main() {
    Complex num1(1, -3);
    Complex num2(1, 3);

    Complex sum = num1.add(num2);
    Complex difference = num1.subtract(num2);
    Complex product = num1.multiply(num2);
    Complex quotient = num1.divide(num2);

    cout << "Sum: ";
    sum.print();
    cout << "\nDifference: ";
    difference.print();
    cout << "\nProduct: ";
    product.print();
    cout << "\nQuotient: ";
    quotient.print();

    return 0;
}
