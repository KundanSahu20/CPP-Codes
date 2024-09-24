#include <iostream>
using namespace std;
class Matrix {
private:
    double data[3][3];
public:
    Matrix() {
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                data[i][j] = 0.0;
    }
    friend istream& operator>>(istream& is, Matrix mat) 
    {
        cout << "Enter 3x3 matrix elements:\n";
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                is >> mat.data[i][j];
        return is;
    }
    friend ostream& operator<<(ostream& os,Matrix mat) 
    {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j)
                os << mat.data[i][j] << " ";
            os << endl;
        }
        return os;
    }
    Matrix operator+(Matrix other)
    {
        Matrix result;
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                result.data[i][j] = data[i][j] + other.data[i][j];
        return result;
    }
    Matrix operator-(Matrix other)
    {
        Matrix result;
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                result.data[i][j] = data[i][j] - other.data[i][j];
        return result;
    }
    Matrix operator*(Matrix other)
    {
        Matrix result;
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                for (int k = 0; k < 3; ++k)
                    result.data[i][j] += data[i][k] * other.data[k][j];
        return result;
    }
};

int main() {
    Matrix mat1, mat2;

    cout << "Enter the first matrix:\n";
    cin >> mat1;

    cout << "Enter the second matrix:\n";
    cin >> mat2;

    Matrix sum = mat1 + mat2;
    Matrix diff = mat1 - mat2;
    Matrix product = mat1 * mat2;

    cout << "Sum of matrices:\n" << sum << endl;
    cout << "Difference of matrices:\n" << diff << endl;
    cout << "Product of matrices:\n" << product << endl;

    return 0;
}