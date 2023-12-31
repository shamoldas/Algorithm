#include<iostream>
using namespace std;
int npr(int a,int b)
{
	int c=1;
	c=fact(a)/fact(a-b);
	return c;
}
int ncr(int a,int b)
{
	int r;
	r=fact(a)/(fact(b)*fact(a-b));
	return r;
}
int fact(int n)
{
	if(n==0)
	return;
	else
	n=n*fact(n-1);
	return n;
}
int main()
{
	int c,r;
	cout<<"enter_the-value_of_C_and_R........\n";
	cin>>c>>r;
	cout<<"permutation_of:"<<c<<"--r---:"<<npr(c,r)<<endl;
	cout<<"combination_of:"<<c<<"---r--:"<<ncr(c,r)<<endl;
	cout<<"\n\n....................................\n";
	return 0;
}
