//const_cast:- It is used to cast away the constness of variables. Following are some interesting facts about const_cast.
//2)const_cast can be used to pass const data to a function that doesn’t receive const. For example, in the following program fun() receives a normal pointer, but a pointer to a const can be passed with the help of const_cast.

#include<iostream>
using namespace std;

int fun(int *ptr)
{
	return(*ptr + 2);
}
int main()
{
	const int a = 10;
	const int *ptr = &a;
	int *ptr1 = const_cast<int *>(ptr);
	fun(ptr1);


}
