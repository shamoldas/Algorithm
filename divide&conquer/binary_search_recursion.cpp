#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int b,int e)
{
	int m;
	if(b>e)
	{
		cout<<"the_number_is_not_found.\n";
		return 0;
	}
	else
	{
	int	m=(b+e)/2;
		if(a[m]==n)
		{
			cout<<"number_is_found_at_"<<m+1<<"_location.\n";
			return 0;
		}
		else if(a[m]<n)
		{
			binarySearch(a,n,m+1,e);
		}
		else if(a[m]>n)
		{
			binarySearch(a,n,b,m+1);
		}
	}
}
int main()
{
	int i,n,p,b,e,m,s;
	cout<<"enter_array_size.\n";
	cin>>s;
	int a[s];
	cout<<"enter_"<<s<<"_elements.\n";
	for(i=0;i<s;++i)
	{
		cin>>a[i];
	}
	b=0;
	e=s-1;
	m=(b+e)/2;
	cout<<"enter_search_number.\n";
	cin>>n;
	binarySearch(a,n,b,e);
	return 0;
}
