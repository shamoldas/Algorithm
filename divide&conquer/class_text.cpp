#include<iostream>
using namespace std;
class text
{
public:
	int a,b,c,count,count2;
	int arr[33],i,n,x;
	void setdata()
	{
		cout<<"enter_total_elements.\n";
		cin>>n;
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
			if(x==arr[i])
			{
				cout<<"found_number.\n";
			}
		}
	}
};
int main()
{
	text ob;
	ob.setdata();
	ob.check();
	return 0;
}
