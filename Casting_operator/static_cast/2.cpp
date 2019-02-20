//Static cast :-This is the simplest type of cast which can be used. It is a compile time cast.It does things like implicit conversions between types (such as int to float, or pointer to void*), and it can also call explicit conversion functions (or implicit ones).

//Note :- If we inherit the derived class from a private or protected base class,then static cast will give error
#include<iostream>
using namespace std;

class Base
{
	
};

class Derived : public Base
{

};
int main()
{
	Derived d;
	Base *b = &d;
//	Base *b = static_cast<Base*>(&d);
	
		
}

