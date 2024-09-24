// Program
	#include <iostream>
	#include <conio.h>
	using namespace std;
	class TTime
	{
	   private:
		  int hours;                      	// 0 to 23
		  int minutes;                    	// 0 to 59
	   public:
		  // no-arg Constructor
		  TTime() : hours(0), minutes(0) {  }

		  // 2-arg Constructor
		  TTime(int h, int m) : hours(h), minutes(m) {  }

		  void display() const            	// output to screen
		  {
			 cout << hours << ':' << minutes;
		  }

		  void get()                      	// input from user
		  {
			 char dummy;
			 cout << "\nEnter time (format 12:59): ";
			 cin >> hours >> dummy >> minutes;
		  }

		  TTime operator++ ()           	// overloaded prefix ++ operator
		  {
			 ++minutes;                   	// increment this Object
			 if(minutes >= 60)
			 {
				++hours;
				minutes -= 60;
			 }                          	// return incremented value
			  return TTime(hours, minutes);
		   }

		  TTime operator++ (int)         	// overloaded postfix ++ operator
		  {
			 TTime temp(hours, minutes); 	// save original value
			 ++minutes;                    	// increment this Object
			 if(minutes >= 60)
			 {
				++hours;
				minutes -= 60;
			 }
			  return temp;                 	// return old original value
		   }
	};  // end class TTime

	int main()
	{
	   TTime Time1, Time2;                  // make two TTime
	   Time1.get();                         // get value for one

	   Time2 = ++Time1;                     // increment it (prefix) and assign

	   cout << "\nTime2=";
	   Time2.display();                     // display result

	   Time2 = Time1++;                     // increment (postfix) and assign

	   cout << "\nTime1=";
	   Time1.display();                     // display incremented value

	   cout << "\nTime2=";
	   Time2.display();                     // display assigned value

	   getch();
	}