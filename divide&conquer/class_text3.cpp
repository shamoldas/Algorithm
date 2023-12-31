#include<iostream>
using namespace std;
class text
{
public:
	int a,b,c,count,count2;
	int arr[33],i,n,x,l[33],r[33],p,q;
	void setdata()
	{
		cout<<"enter_total_elements.\n";
		cin>>n;
		cout<<"enter_"<<n<<"_element.\n";
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	}
	void check()
	{
		cout<<"enter_choice_number.\n";
		cin>>x;
		for(i=0;i<n;i++)
		{
			if(arr[i]<x)
			{
				l[p]=arr[i];
				p++;
				count++;
			}
			else if(arr[i]>x)
			{
				r[q]=arr[i];
				q++;
				count2++;
			}
			else if(arr[i]==x)
			{
				cout<<"found_number.\n";
			}
			else
			{
				cout<<"number_not_found.\n";
			}
			
		}
	}
	void print()
	{
		cout<<"left..\n";
		for(i=0;i<count;i++)
		{
			cout<<l[i]<<"->";
		}
		cout<<"\n";
		cout<<"right....\n";
		for(i=0;i<count2;i++)
		{
			cout<<r[i]<<"->";
		}
		cout<<"\n";
	}
};
int main()
{
	text ob;
	ob.setdata();
	ob.check();
	ob.print();
	return 0;
}
