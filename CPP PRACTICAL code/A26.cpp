#include <iostream>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;

class Matrix {
private:
    int i,j,k,data[3][3];
public:
    void input();
    void output();
    Matrix operator+(Matrix m1);
    Matrix operator-(Matrix m1);
    Matrix operator*(Matrix m1);
};

void Matrix::input()
{
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        cin >> data[i][j];
    }
}
void Matrix::output()
{
    for ( i = 0; i < 3; i++)
    {
        cout << "\n";
        for ( j = 0; j < 3; j++)
        cout << data[i][j] << " ";
    }
}
Matrix Matrix::operator+(Matrix m1)
{
    Matrix result;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        result.data[i][j] = this->data[i][j] + m1.data[i][j];
    }
    return (result);
}
Matrix Matrix::operator-(Matrix m1)
{
    Matrix result;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        result.data[i][j] = this->data[i][j] - m1.data[i][j];
    }
    return (result);
}
Matrix Matrix::operator*(Matrix m1)
{
    Matrix result;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            result.data[i][j]=0;
            for ( k = 0; k < 3; k++)
            {
                result.data[i][j] += this->data[i][k] * m1.data[k][j];
            }
        }
    }
    return (result);
}

int main() {
    Matrix mat1, mat2,mat3;

    cout << "Enter the first matrix:\n";
    mat1.input();
    cout << "Enter the second matrix:\n";
    mat2.input();

    Matrix sum = mat1 + mat2;
    Matrix diff = mat1 - mat2;
    Matrix product = mat1 * mat2;
    clrscr();

    cout << "\nfirst matrix: ";
    mat1.output();
    cout << "\nsecond matrix: ";
    mat2.output();
    cout << "\nSum of matrices:";
    sum.output();
    cout << "\nDifference of matrices:";
    diff.output();
    cout << "\nProduct of matrices:";
    product.output();

    getch();
}