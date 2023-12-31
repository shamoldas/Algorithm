#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void lcs(char *x,char *y,int m,int n)
{
    int l[m+1][n+1];
    //int i,k;
    for(int i=0;i<=m;i++)
    {
        for(int k=0;k<=n;k++)
        {
            if(i==0||k==0)
                l[i][k]=0;
            else if(x[i-1]==y[k-1])
                l[i][k]=l[i-1][k-1]+1;
            else
                l[i][k]=max(l[i-1][k],l[i][k-1]);
        }
    }
    int index=l[m][n];
    char lcs[index+1];
    lcs[index]='\0';
    int i=m,k=n;
    while(i>0&&k>0)
    {
        if(x[i-1]==y[i-1])
        {
            lcs[index-1]=x[i-1];
            i--,k--,index--;
        }
        else if(l[i-1][k]>l[i][k-1])
            i--;
        else
            k--;
    }
    cout<<"lcs_of_:"<<x<<"__and___"<<y<<"__is:::"<<lcs;
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
