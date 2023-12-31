#include<iostream>
using namespace std;
class text
{
public:
	int a,b,c,count,count2;
	int arr[33],i=0,n,x,l[33],r[33],p,q;
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
		while(arr[i]!='\0')
		//for(i=0;i<n;i++)
		{
			if(x>arr[i])
			{
				l[p]=arr[i];
				p++;
				count++;
			}
			else if(x<arr[i])
			{
				r[q]=arr[i];
				q++;
				count2++;
			}
			else if(x==arr[i])
			{
				cout<<"found_number.\n";
			}
			else
			{
				cout<<"number_not_found.\n";
			}
			i++;
			
		}
	}
};
int main()
{
	text ob;
	ob.setdata();
	ob.check();
//	ob.print();
	return 0;
}
