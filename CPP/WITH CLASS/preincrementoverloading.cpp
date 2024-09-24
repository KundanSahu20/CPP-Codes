// Program
	#include <iostream>
	#include <conio.h>
    using namespace std;
	class TTime{
	   private:
		  int hours;             	// 0 to 23
		  int minutes;           	// 0 to 59

	   public:
		  TTime(){
            hours=0;
            minutes=0;
        }
		  TTime(int h, int m){
            hours=h;
            minutes=m;
        }
		  void display()   	// output to screen
		  {
			 cout << hours << " hours : " << minutes << " minutes";
		  }
		  void get()             	// input from user
		  {
            char k;
			 cout << "\nEnter time (format hour : minutes ) : ";
			 cin >> hours >> k >> minutes;
		  }
		  TTime operator++ ()  	// overloaded prefix ++ operator
		  {
			 ++minutes;          	// increment this Object
			 if(minutes >= 60)  
			 {
				++hours;
				minutes -= 60 ;
			 }
			 return TTime(hours, minutes);
		  }
	};
	int main()
	{
	  
       TTime Time1, Time2;         	// make two TTimes
	   Time1.get();      
       cout << "\nEnter Time = ";
	   Time1.display();            	// display resul          	// get value for one
       cout << "\nAfter Increment ";
       ++Time1;                    	// increment it
	   cout << "\nTime1 = ";
	   Time1.display();            	// display result

	   Time2 = ++Time1;              // increment again, and assign
	   cout << "\nTime2 = ";
	   Time2.display();            	// display assigned value
	   getch();
	}
