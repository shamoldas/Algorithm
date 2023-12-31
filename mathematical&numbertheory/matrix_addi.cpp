#include<iostream>
using namespace std;
int main()
{
	int a[22][22],b[22][22],c[22][22];
	int r1,r2,c1,c2,i,k,l;
	cout<<"enter_first_matrix_row__colunm.\n";
	cin>>r1>>c1;
	cout<<"enter_"<<c1*r1<<"__elements.\n";
	for(i=0;i<r1;i++)
	{
		for(k=0;k<c1;k++)
		{
			cin>>a[i][k];
		}
	}
	cout<<"enter_second_matrix_row__colunm.\n";
	cin>>c2>>r2;
	cout<<"enter_"<<c2*r2<<"__elements.\n";
	for(i=0;i<r2;i++)
	{
		for(k=0;k<c2;k++)
		{
			cin>>b[i][k];
		}
	}
	if(c1!=c2)
	{
		cout<<"incomparable_dimention.\n";
	}
	else
	{
		for(i=0;i<c1;i++)
		{
			for(k=0;k<r1;k++)
			{
					c[i][k]=a[i][k]+b[i][k];
			}
		}
	}
	cout<<"................................\n";
	cout<<"\nmatrix_addition...\n";
		for(i=0;i<c1;i++)
	{
		for(k=0;k<r1;k++)
		{
			cout<<c[i][k]<<"->";
		}
		cout<<"\n";
	}
	cout<<"\t";
	return 0;
	
}
