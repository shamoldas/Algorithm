#include<iostream>
#include<stdbool.h>
using   namespace   std;
int main()
{
    int a=2,b=5;
    add(a,b)?cout<<"false":cout<<"true";
   /* if(a>b)
        return  false;
    else
        return;*/
}
bool    add(int a,int   b)
{
    int n;
    n=a+b;
    if(n>10)
        return  true;
    else
        false;
}
