#include<iostream>
using namespace std;
int gcd(int m,int n)
{
	int r;
	if(m==0||n==0)
	return 0;
	else if((m<0)||(n<0))
	return-1;
	do
	{
		r=m%n;
		if(r==0)
		break;
		m=n;
		n=r;
	}while(true);
	return n;
}
int main()
{
	int a,b,n,i;
	cout<<"enter_two_number.\n";
	cin>>a>>b;
	n=gcd(a,b);
	cout<<"a->"<<a<<"__b->"<<b<<"___is_gcd->"<<n<<endl;
}
