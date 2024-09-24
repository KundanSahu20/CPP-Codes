// Pure Virtual Function
	#include <iostream>
	#include <conio.h>
	using namespace std;

	class Base {
		public:
			virtual void show() = 0;     	// pure virtual function
	};

	class DerivedClass1 : public Base          	// derived class 1
	{
		public:
			void show()
			{ cout << "\nDerivedClass1"; }
	};

	class DerivedClass2 : public Base          	// derived class 2
	{
		public:
			void show()
			{ cout << "\nDerivedClass2"; }
	};
	int main()
	{
		Base *b;
		DerivedClass1 d1;
		DerivedClass2 d2;
		b=&d1;
		b->show();
		d2.show();
		return 0;
	}
