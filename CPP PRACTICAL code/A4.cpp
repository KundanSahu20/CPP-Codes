#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int toDecimal(const string& num, int base) 
{
    int decimal = 0;
    int size = num.length();

    for (int i = 0; i < size; ++i) {
        int digit = (num[i] >= '0' && num[i] <= '9') ? (num[i] - '0') : (num[i] - 'A' + 10);
        decimal += digit * pow(base, size - i - 1);
    }

    return decimal;
}

string toBase(int decimal, int base) 
{
    string result = "";
    
    while (decimal > 0) {
        int remainder = decimal % base;
        char digit = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        result = digit + result;
        decimal /= base;
    }

    return (result.empty()) ? "0" : result;
}

int main() 
{
    cout << "Enter the source number system (e.g., 2 for binary, 8 for octal, 10 for decimal, 16 for hexadecimal): ";
    int sourceBase;
    cin >> sourceBase;

    cout << "Enter the target number system: ";
    int targetBase;
    cin >> targetBase;

    if (sourceBase < 2 || targetBase < 2 || sourceBase > 16 || targetBase > 16) {
        cerr << "Invalid number system. Please enter a number system between 2 and 16." << endl;
        return 1;
    }

    cout << "Enter the number in the source number system: ";
    string sourceNumber;
    cin >> sourceNumber;

    int decimalNumber = toDecimal(sourceNumber, sourceBase);

    string targetNumber = toBase(decimalNumber, targetBase);
    cout << "Result in base " << targetBase << ": " << targetNumber << endl;
    return 0;
}
