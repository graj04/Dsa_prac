#include<iostream>
using namespace std;

int main()
{
	int x[100];
	int flag=0;
	int n,i,key,l,h,mid;
	cout<<"Enter the size of array :";
	cin>>n;
	cout<<"Enter the elements in ascending order : ";
	for (i=0;i<n;i++)
	cin>>x[i];
	cout<<"Enter the element to search: ";
	cin>>key;
	l=0;
	h=n-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if (key==x[mid])
		{
			cout<<"Element found at position : "<<(mid+1);
			flag=1;
			break;
		}
		else if(key<x[mid])
		h=mid-1;
		else
		l=mid+1;
	}
	if (flag==0)
	{
	cout<<"Element not found !!"<<endl;
	}
	return 0;
	
	
 } 
