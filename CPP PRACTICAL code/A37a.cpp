#include <iostream>
#include<string.h>
#include <conio.h>
#define clrscr(); system("cls");
using namespace std;
class Account {
  protected:
    string customer_name; 
    int account_number; 
    string account_type;
    double balance;
public:
    Account(string name, int number, string type, double amount) {
      customer_name = name;
      account_number = number;
      account_type = type;
      balance = amount;
    }

    void deposit(double amount) {
      balance = balance + amount;
      cout << balance;
    }

    void display_details_customer() {
      cout << "\nCustumer Name : " << customer_name ;
      cout << "\nAccount Number : " << account_number ;
      cout << "\nAccount Type : " << account_type ;
      cout << "\nThe Total balance is: " << balance ;
    }

    virtual void compute_interest() = 0;
    virtual void withdraw(double amount) = 0;
    virtual void check_minimum_balance() = 0;

};

class cur_acct : public Account 
{
  private:
    double minimum_balance;
    double penalty;
  public:
    cur_acct(string name, int number, double amount) : Account(name, number, "Current", amount) 
    {
      minimum_balance = 1000; 
      penalty = 100;
    }

    void compute_interest() 
    {
      double interest = balance * 0.01; 
      balance = balance + interest;
      cout << balance;
    }

    void withdraw(double amount) 
    {
      if (balance >= amount) 
      {
        balance = balance - amount;
        cout << balance;
      }
      else {
        cout << "\nInsufficient balance" ;
      }
    }

    void check_minimum_balance() 
    {
      if (balance < minimum_balance) 
      {
        balance = balance - penalty;
        cout << "\nPenalty imposed" ;
      }
    }
};

class sav_acct : public Account 
{
  private:
    double interest_rate;
  public:
    sav_acct(string name, int number, double amount) : Account(name, number, "Savings", amount) 
    {
      interest_rate = 0.03;
    }

    void compute_interest() 
    {
      double interest = balance * interest_rate;
      balance = balance + interest;
      cout << balance;
    }

    void withdraw(double amount) {
      if (balance >= amount) 
      {
        balance = balance - amount;
        cout << balance;
      }
      else 
      {
        cout << "\nInsufficient balance" ;
      }
    }

    void check_minimum_balance() {
      cout << "\nNo penalty for savings account for minimum balance " ;
    }
};

int main() 
{
  int num;
  string name;
  double bal,dep,with;
  int type;
  cout << "\nEnter Name Of Customer : ";
  getline(cin,name);
  cout <<"\nEnter Account Type:\nEnter 0 for Saving Account and 1 for Current Account :";
  cout <<"\nEnter Type :";
  cin >> type;
  if( type == 1 )
    { 
    cout << "\nEnter Account Number : ";
    cin >> num;
    cout << "\nEnter Deposit Balance : ";
    cin >> bal;
    cur_acct A(name,num,bal);
    A.display_details_customer();
    cout << "\nCompute and deposit interest from customer account :";
    A.compute_interest();
    cout << "\nEnter Balnace if you Deposit money or Enter 0 : ";
    cin >> dep; 
    cout << "\nBalance After Deposit :";
    A.deposit(dep);
    cout << "\nEnter Balance for Withdrawal : ";
    cin >> with;
    cout << "\nBalance After Withdrawal :";
    A.withdraw(with);
    A.check_minimum_balance();
    cout << "\nNEW ENTRY";
    }

  else if( type == 0 ) 
  {  
    cout << "\nEnter Account Number : ";
    cin >> num;
    cout << "\nEnter Deposit Balance : ";
    cin >> bal;
    sav_acct B(name,num,bal);
    B.display_details_customer();
    cout << "\nCompute and deposit interest from customer account :";
    B.compute_interest();
    cout << "\nEnter Balnace if you Deposit money or Enter 0 : ";
    cin >> dep; 
    cout << "\nBalance After Deposit :";
    B.deposit(dep);
    cout << "\nEnter Balance for Withdrawal : ";
    cin >> with;
    cout << "\nBalance After Withdrawal :";
    B.withdraw(with);
    B.check_minimum_balance();
    cout << "\n\n\nNEW ENTRY";
  }
  else
  {
  cout << "\n Invalid Account Type Selected Please Select 0 or 1 : ";
  }
  getch();
}