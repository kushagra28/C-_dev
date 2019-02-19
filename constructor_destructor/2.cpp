//Program to show shallow copy and deep copy

#include<iostream>
using namespace std;

class ABC
{
	int x,y;
	public:
	ABC(int a,int b):x(a),y(b) {};
	ABC(const ABC &obj)
	{
		x = obj.x;
		y = obj.y;
	}
	void change(int a, int b)
	{
		x = a;
		y = b;
	}
	void print()
	{
		cout <<"X and Y are"<<x <<y<<endl;
	}
	
};
int main()
{
	ABC a(10,12);
	ABC b = a;
	b.change(12,12);
	a.print();
	b.print();
}
