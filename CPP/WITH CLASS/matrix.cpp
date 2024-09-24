#include <iostream>
using namespace std;
class Matrix {
private:
    int i,j,k,data[3][3];
public:
    Matrix()
    {
        for ( i = 0; i < 3; ++i)
            for ( j = 0; j < 3; ++j)
            data[i][j] = 0;
    }

    friend istream &operator>>(istream &input,Matrix m1);
    friend ostream &operator<<(ostream &output,Matrix m1);
    Matrix operator+(Matrix m1);
    Matrix operator-(Matrix m1);
    Matrix operator*(Matrix m1);
};

istream &operator>>(istream &input,Matrix m1)
{
    for ( int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 3; j++)
        input >> m1.data[i][j];
    }
    return input;
}
ostream &operator<<(ostream &output,Matrix m1)
{
    for (int i = 0; i < 3; i++)
    {
        cout<< "\n";
        for (int  j = 0; j < 3; j++)
        output << m1.data[i][j] << " ";
    }
    return output;
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
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
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
    cin >> mat1;
    cout << "Enter the second matrix:\n";
    cin >> mat2;

    Matrix sum = mat1 + mat2;
    Matrix diff = mat1 - mat2;
    Matrix product = mat1 * mat2;
    cout << "\nfirst matrix:\n" << mat1;
    cout << "\nsecond matrix:\n" << mat2;
    cout << "\nSum of matrices:" << sum;
    cout << "\nDifference of matrices:" << diff;
    cout << "\nProduct of matrices:" << product;

    return 0;
}