//Static cast :-This is the simplest type of cast which can be used. It is a compile time cast.It does things like implicit conversions between types (such as int to float, or pointer to void*), and it can also call explicit conversion functions (or implicit ones).
#include<iostream>
using namespace std;


int main()
{
	int a = 10;
	float f = static_cast<float>(a);

}

