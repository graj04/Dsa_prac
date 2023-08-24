#include <iostream>
using namespace std;

int main()
{
	int n;
	int i;
	int m;
	cin>>n;
	
	int *a=new int[n];
	
	// int a[n];
	for (i=0;i<n;i++)
	cin>>a[i];
	
	cin>>m;
	int b[m];
	for (i=0;i<m;i++)
	cin>>b[i];
	
	int t;
	if (n>m)
	t=n;
	else
	t=m;
	t =n+m;
	
	
	int c[t];
	
	i=0;int j=0;int k=0;
	//copying value from a to c
	while(i<n&&j<m)
	c[k++]=a[i++]+b[j++];
	//copying value b to c
	while (j<m)
	c[k++]=b[j++];
	while (i<n)
	c[k++]=b[j++];
	
	
	for(i=0;i<t;i++)
	{
		cout<<c[i]<<" ";
		
	}
	
	return 0;
	
	
}
