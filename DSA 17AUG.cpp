#include <iostream>
using namespace std;

void selectionSort(int A[],int n)
{
	int i,j,minpos,temp;
	for (i=0;i<n-1;i++)
	{
		minpos=i;
	
	for (j=i+1;j<n;j++)
	{
		if(A[j]<A[minpos])
		minpos=j;
	}
	if (minpos!=i)
	{
		temp=A[i];
		A[i]=A[minpos];
		A[minpos]=temp;
	}
}
}
int main()
{
    int arr[] = {78,854,6,54,51,51,76,89,};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
