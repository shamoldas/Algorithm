#include<iostream>
using namespace std;
int main()
{
	cout<<"read_carefully.\n";
	int m,n,i,k,l,sum;
	cout<<"enter_matrix_row_colum.\n";
	cin>>m>>n;
	int a[m][n];
	cout<<"enter_"<<m*n<<"_element.\n";
	for(i=0;i<m;i++)
	{
		for(k=0;k<n;k++)
		{
			cin>>a[i][k];
		}
	}
	cout<<"2nd_matrix.\n";
int o,p;
	cout<<"enter_2nd_matrix_row_colum.\n";
	cin>>o>>p;
	cout<<"enter-"<<o*p<<"-element.\n";
	int b[o][p];
		for(i=0;i<o;i++)
	{
		for(k=0;k<p;k++)
		{
			cin>>b[i][k];
		}
	}
	int c[111][111];
		for(i=0;i<m;i++)
		{
			for(k=0;k<p;k++)
			{
			//	sum=0;
				for(l=0;l<o;l++)
				{
				    c[i][k]+=a[i][l]*b[l][k];
				}
			}
		}

	cout<<"sum:"<<sum<<endl;
	cout<<"..DISPLAY....\n";
	cout<<"multipication_two_matrix_.\n";
	for(i=0;i<m;i++)
	{
		for(k=0;k<p;k++)
		{
			cout<<c[i][k]<<"...";
		//	cout<<"\n";
		}
		cout<<"\n";
	}
	cout<<"\t";
	return 0;

}

