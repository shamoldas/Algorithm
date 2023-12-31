#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int lcs(char *x,char *y,int m,int n)
{
    int l[m+1][n+1];
    int i,k;
    for( i=0;i<=m;i++)
    {
        for( k=0;k<=n;k++)
        {
            if(i==0||k==0)
                l[i][k]=0;
            else if(x[i-1]==y[k-1])
                l[i][k]=l[i-1][k-1]+1;
            else
                l[i][k]=max(l[i-1][k],l[i][k-1]);
        }
    }
    return l[m][n];
}
int max(int a,int b)
{
    return(a>b)?a:b;
}
int main()
{
    char x[]="shamol";
    char y[]="kamol";
    int m,n;
    m=strlen(x);
    n=strlen(y);
    lcs(x,y,m,n);
    return 0;
}

