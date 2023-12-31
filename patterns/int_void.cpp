#include<iostream>
using   namespace   std;
float   value(int   a,int   b)
{
    int sum;
    sum=a*b;
    cout<<"value    \nmultiplication:"<<sum<<endl;
    //return(sum);
    return  sum;
}
void  value2(int   a,int   b)
{
    int sum;
    sum=a*b;
    cout<<"value2   \n  multiplication:"<<sum<<endl;
    return;
}
int main()
{
    int a,b,sum;
    a=3,b=5;
    sum=value(3,5);
    value2(3,5);
    cout<<"multiplication:"<<sum<<endl;
    return  0;
}
