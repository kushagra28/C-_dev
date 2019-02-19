//Program to create your own string class

#include<iostream>
#include<cstring>
using namespace std;

class String
{
	char *ptr;

	public:
		String();
		~String(){
			cout<<"Destructor called"<<endl;
			delete [] ptr;
		}
		String(const char *obj);
		String(const String& obj1);
		void print();
		void change(const char *);


};

void String::print()
{
	cout <<"Ptr is "<<ptr<<endl;
}
String::String(const char *obj)
{
	cout << "Parameterized constructor called"<<endl;
	int len = strlen(obj);
	ptr = new char(len+1);
	strcpy(ptr,obj);
}
String::String(const String& obj1)
{
	cout << "Copy constructor called"<<endl;
	int len1 = strlen(obj1.ptr);
	ptr = new char(len1 +1);
	strcpy(ptr,obj1.ptr);

}

void String::change(const char *obj)
{
	delete [] ptr;
	int len2 = strlen(obj);
	ptr = new char(len2+1);
	strcpy(ptr,obj);
	

}

String::String()
{
	cout <<"Default constructor called"<<endl;
}


int main()
{
	String str;
	String str1("Kushagra");
	str1.print();
	str1.print_address();
	String str2 = str1;
	str2.print_address();
	str2.change("Singh");
	str2.print();
	str1.print();
		
}
