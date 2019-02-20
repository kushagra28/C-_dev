//const_cast:- It is used to cast away the constness of variables. Following are some interesting facts about const_cast.
// It is  to modify a value which is initially declared as const. Consider the following program. The output of the program is undefined. The variable ‘val’ is a const variable and the call ‘fun(ptr1)’ tries to modify ‘val’ using const_cast.
#include<iostream>
using namespace std;

int fun(int *ptr)
{
	*ptr = *ptr + 10;
	return (*ptr);
}
int main()
{
	const int a = 10;
	const int *ptr = &a;
	int *ptr1 = const_cast<int *>(ptr);
	fun(ptr1);
	cout <<a<<endl;


}
