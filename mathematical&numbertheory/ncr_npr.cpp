#include<iostream>
#include<stdio.h>
using namespace std;
long npr(int a,int b)
{
	int c;
	c=fact(a)/fact(a-b);
	return c;
}
long ncr(int a,int b)
{
	int r;
	r=fact(a)/(fact(b)*fact(a-b));
	return r;
}
long fact(int n)
{
	int i,result=1;
	for(i=1;i<=n;i++)
	{
		result=result*i;
	}
	return result;
}
int main()
{
	int c,r;
	cout<<"enter_the-value_of_C_and_R........\n";
	cin>>c>>r;
	cout<<"permutation_of:"<<c<<"--r---:"<<npc(c,r)<<endl;
	cout<<"combination_of:"<<c<<"---r--:"<<ncr(c,r)<<endl;
	cout<<"\n\n....................................\n";
	return 0;
}
