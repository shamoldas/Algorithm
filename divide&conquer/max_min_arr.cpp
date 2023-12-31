#include<iostream>
using namespace std;
int main()
{
	int i,n,k;
	int max,min;
	cout<<"enter_array_size.\n";
	cin>>n;
	int a[n];
	cout<<"input_"<<n<<"_elements.\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		//cout<<max<<endl;
		else if(a[i]<min)
	//if else(a[i]<min)

		{
			min=a[i];
		}
	}
		cout<<"maximum:"<<max<<endl;
		cout<<"minimun:"<<min<<endl;
		return 0;
}
