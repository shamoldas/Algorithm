#include<iostream>
using namespace std;
long fact(int n)
{
	int r;
	r=1;
	if(n==0)
	return 1;
	else
	r=n*fact(n-1);
	return r;
}
int main()
{
	int a,n;
	cout<<"enter_a_number_get_factorial.\n";
	cin>>a;
	n=fact(a);
	cout<<"factorial->"<<a<<"---is="<<n<<endl;
	cout<<"\n............................\n";
	return 0;
	
}
