#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int i,k,c[22][22],m,n;
char x[22],y[22],b[22][22];
void print(int i,int k)
{
    if(i==0||k==0)
        return;
    if(b[i][k]=='c')
    {
        print(i-1,k-1);
    cout<<x[i-1];
    }

    else if(b[i][k]=='u')
        print(i-1,k);
    else
        print(i,k-1);
}
void lcs()
{
    m=strlen(x);
    n=strlen(y);
    for(i=0;i<=m;i++)
    {
        c[i][0]=0;
    }
    for(i=0;i<=n;i++)
    {
        c[0][i]=0;
    }
    for(i=0;i<=m;i++)
    {
        for(k=0;k<=n;i++)
        {
            if(x[i-1]==y[k-1])
            {
                c[i][k]=c[i-1][k-1]+1;
                b[i][k]='c';
            }
            else if(c[i-1][k]>=c[i][k-1])
            {
                c[i][k]=c[i-1][k];
                b[i][k]='u';
            }
            else
            {
                c[i][k]=c[i][k-1];
                b[i][k]='l';
            }
        }
    }
   // print(m,n);
}
int main()
{
    cout<<"enter_the_first_sequence.\n";
    cin>>x;
    cout<<"enter_second_sequence.\n";
    cin>>y;
    cout<<"\n\n.longest_common_sun_sequence.:";
    lcs();
    print(m,n);
    return 0;
}

