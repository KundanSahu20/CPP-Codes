#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string decimalToBase(int decimal, int base) 
{
  string result = "";
  char digits[] = "0123456789ABCDEF";
  while (decimal > 0)
  {
    int remainder = decimal % base;
    result = digits[remainder] + result;
    decimal = decimal / base;
  }
  return result;
}

int baseToDecimal(string number, int base) 
{
  int result = 0;
  int power = 0;
  for (int i = number.length() - 1; i >= 0; i--) 
  { 
    char digit = number[i];
    int value;
    if (digit >= '0' && digit <= '9') 
    {
      value = digit - '0';
    }
    else if (digit >= 'A' && digit <= 'F') 
    {
      value = digit - 'A' + 10;
    }
    else 
    {
      return -1;
    }
    if (value >= base) 
    {
      return -1;
    }
    result += value * pow(base, power);
    power++;
  }
  return result;
}

string baseToBase(string number, int fromBase, int toBase)
{
  int decimal = baseToDecimal(number, fromBase);
  if (decimal == -1)
  { 
    return "Invalid number";
  }
  string result = decimalToBase(decimal, toBase);
  return result;
}

int main() 
{
  int fromBase, toBase;
  string number;
  cout << "Enter the base of the input number (2 to 16): ";
  cin >> fromBase;
  cout << "Enter the base of the output number (2 to 16): ";
  cin >> toBase;
  cout << "Enter the number in base " << fromBase << ": ";
  cin >> number;
  string result = baseToBase(number, fromBase, toBase);
  cout << "The number in base " << toBase << " is: " << result << endl;
  return 0;
}
