#include <iostream>
#define MAXSIZE 100
using namespace std;

int b[MAXSIZE];
int n;
void trav_forward();
void create_array();
void insert_last(int );
void insert_begin(int );


	
void create_array()
{
	cout<<"Enter the size of array:\t";
	cin>>n;
	for (int i=0;i<n;i++)
	cin>>b[i];
	
}
void trav_forward()
{
	cout<<"the elements are: "<<endl;
	for (int i=0;i<n;i++)
	cout<<b[i]<<endl;
}
void trav_backward()
{
	cout<<"The elements in the bacckward order\n"<<endl;
	for (int i=n;i>=0;i--)
	cout<<b[i]<<endl;
}
void insert_last(int x)
{
	b[n]=x;
	n++;
}

void insert_begin(int x)
{
	for (int i=n-1;i>=0;i--)
	b[i+1]=b[i];
	b[0]=y;
}
int main()
{

	create_array();
	trav_forward();
	insert_last(7);
	trav_forward();
	insert_beginning(7);
	insert_last(6);
	trav_forward();
	return 0;

}




