#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
	int i=low-1;
	int k;
	for(k=low;k<=high-1;k++)
	{
		if(arr[k]<=pivot)
		{
			i++;
			swap(arr[i],arr[k]);
		}
	}
	swap(arr[i+1],arr[high]);
	return i+1;
}
void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}
}
void printarray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"->";
	}
	
}
int main()
{
	int i,n;
	cout<<"enter_array_size.\n";
	cin>>n;
	int arr[n];
	cout<<"enter_"<<n<<"_elements.\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	cout<<"after_quick_sort:";
	printarray(arr,n);
	return 0;
}
