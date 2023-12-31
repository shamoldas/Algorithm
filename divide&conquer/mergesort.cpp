#include<iostream>
#define max 55
//using namespace std;
//void mergesort(int *a,int l,int h,int m);
//void merge(int *a,int l,int h);
using namespace std;
void merge(int a[],int l,int m,int r)
{
	int p,q,w,n1,n2;
	n1=m-l+1;
	n2=w-m;
	int L[n1],R[n2];
	for(p=0;p<n1;p++)
	{
		L[p]=a[l+p];
	}
	for(q=0;q<n2;q++)
	{
		R[q]=a[m+1+q];
	}
	p=0,q=0,w=l;
	while(p<n1&&q<n2)
	{
		if(L[p]<=R[q])
		{
			a[w]=L[p];
			p++;
		}
		else
		{
			a[w]=R[q];
			q++;
		}
		w++;
	}
	while(p<n1)
	{
		a[w]=L[p];
		p++;
		w++;
	}
	while(q<n2)
	{
		a[w]=R[q];
		q++;
		w++;
	}
}
void mergesort(int a[],int l,int r)
{
	if(l<r)
	{
		int m=l+(r-l)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
}
void printarray(int A[],int s)
{
	int i;
	cout<<"after_sort:";
	for(i=0;i<s;i++)
	{
		cout<<A[i]<<"->";
	}
}
int main()
{
	int a[max],i,n;
	cout<<"enter_array_size.\n";
	cin>>n;
//	cout<<"enter_"<<n<<"_total_number_of_element.\n";
//	cin>>n;
	cout<<"enter_"<<n<<"_element.\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	printarray(a,n);
	return 0;
}
