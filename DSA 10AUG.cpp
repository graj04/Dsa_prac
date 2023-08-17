#include<iostream>
#define MAXSIZE 100

using namespace std;
int x[MAXSIZE];
int n;
void create_array();
void Trav_forward();
void Trav_backward();
void insert_last(int t);
void insert_begin(int);

void deletion_last();
void deletion_begin();
void deletion_at_even_position();
void search_element();

void search_element()
{
	int t;
	cout<<"Enter the element to be searched";
	cin>>t;
	for(int i =0;i<n;i++)
	{
	if(t==x[i]){
	return i;
	}
	
	
	}
	return -1;
}

//void deletion_at_even_position()
//{
//	for (i=2;i<n;i++)  //error found debug it later!!
//	x[i]=x[i+1];
//	
//	x[n-1]=0;
//	n--;
//}
void search_element()
void deletion_begin()
{
	for(int i=0;i<n;i++)
	
	x[i]=x[i+1];
	
	x[n-1]=0;
	n--;
}
void deletion_last()
{
	for(int i=n-1;i>=0;i--)
	{
	x[n-1]=0;
	n--;}
}

void insert_begin(int b)
{
	for(int i=n-1;i>=0;i--)
	{
	x[i+1]=x[i];
	x[0]=b;
	n++;}
}

void insert_Last(int t)
{
	x[n]=t;
	n++;
}

void create_array()
{
	cout<<"Enter the size of array: ";
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>x[i];
}
void Trav_forward()
{
	cout<<"The array in forward order: "<<endl;
	for(int i=0;i<n;i++)
	cout<<x[i]<<endl;
}
void Trav_backward()
{
	cout<<"\nThe array element in backward order is: "<<endl;
	for(int i=n-1;i>=0;i--)
	cout<<x[i]<<endl;
}

int main(){
	int b;
	create_array();
	Trav_forward();
	Trav_backward();
	insert_Last(7);
	Trav_forward();
	cout<<"Enter the element to insert at begining"<<endl;
	cin>>b;
	insert_begin(b);
	Trav_forward();
	deletion_last();
	Trav_forward();
	deletion_begin();
	Trav_forward();
	deletion_at_even_position();
	Trav_forward;
	int b;
	b=search_element();
	if(b==-1)
	cout<<"Element found at ";
	else
	cout<<"Elemrnt not found"<<b;
	
//	int x[5];	
//	for(int i=0;i<5;i++)
//	cin>>x[i];
//	cout<<"The array is \n";
//	
//	for(int i=0;i<5;i++)
//	cout<<x[i]<<endl;
	
	return 0;
}
