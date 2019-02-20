//const_cast:- It is used to cast away the constness of variables. Following are some interesting facts about const_cast.
//1) const_cast can be used to change non-const class members inside a const member function. Consider the following code snippet. Inside const member function fun(), ‘this’ is treated by the compiler as ‘const student* const this’, i.e. ‘this’ is a constant pointer to a constant object, thus compiler doesn’t allow to change the data members through ‘this’ pointer. const_cast changes the type of ‘this’ pointer to ‘student* const this’.

#include<iostream>
using namespace std;

class student
{
private:
	int roll;
public:
	student(int x):roll(x) {};

	void fun() const
	{
		const_cast<student*>(this)->roll = 5;
	}	

	int getroll()
	{
		return roll;
	}
};

int main()
{
	student s(4);
	cout <<"Old roll number "<<s.getroll()<<endl;
	s.fun();
	cout <<"New roll number "<<s.getroll()<<endl;
}
