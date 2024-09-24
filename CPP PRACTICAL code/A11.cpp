/*  Write a Program-using class having class name Darray. Darray has pointer to integer as data member to implement double dimension dynamic array and provide following facilities :
a)	ructor to input values in array elements.
b)	Input member function to get input in array element.
c)	Output member function to print element value. 
d)	Add member function to perform matrix addition using objects.
e)	Subtract member function to perform matrix subtraction using objects.
f)	Multiply member function to perform matrix multiplication using objects.*/
#include <iostream>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;

class Darray {
private:
    int** matrix;
    int row, colomn;
public:
    Darray(int r, int c)
    {
        row = r;
        colomn = c;
        matrix = new int *[row];
        for (int i = 0; i < row; i++) {
            matrix[i] = new int[colomn];
        }
    }

    void input() {
        cout << "Enter " << row * colomn << " Elements:\n";
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < colomn; ++j) {
                cin >> matrix[i][j];
            }
        }
    }
    void output() {
        cout << "Matrix elements:\n";
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < colomn; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }
    Darray add( Darray& other) {
        Darray result(row, colomn);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < colomn; ++j) {
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }
        return result;
    }
    Darray subtract( Darray& other) {
        Darray result(row, colomn);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < colomn; ++j) {
                result.matrix[i][j] = matrix[i][j] - other.matrix[i][j];
            }
        }
        return result;
    }
    Darray multiply( Darray& other) {
        Darray result(row, other.colomn);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < other.colomn; ++j) {
                result.matrix[i][j] = 0;
                for (int k = 0; k < colomn; ++k) {
                    result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }
        return result;
    }
    ~Darray() {
        for (int i = 0; i < row; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
};

int main() {
    int row, colomn;
    cout << "Enter number of row: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> colomn;

    Darray matrix1(row, colomn);
    matrix1.input();

    Darray matrix2(row, colomn);
    matrix2.input();

    Darray sum = matrix1.add(matrix2);
    Darray difference = matrix1.subtract(matrix2);
    Darray product = matrix1.multiply(matrix2);

    cout << "Sum of matrices:\n";
    sum.output();

    cout << "Difference of matrices:\n";
    difference.output();

    cout << "Product of matrices:\n";
    product.output();

    return 0;
}
