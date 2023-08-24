#include <iostream>
using namespace std;

int main()
{
	float x=5;  // same datatype has to be used different will not work.
	float*p;
	p=&x;
	
	cout<<"x= "<<x<<endl;
	cout<<"p= "<<p<<endl;
	cout<<"&x= "<<&x<<endl;
	cout<<"*p= "<<*p<<endl;
	cout<<"*(&x)= "<<*(&x)<<endl;
	cout<<"*p= "<<++(*p)<<endl;
	
	
	return 0;
}
