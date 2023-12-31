#include<stdio.h>
int sum(int arr[],int start,int len)
{
	if(start>=len)
	return 0;
	return(arr[start]+sum(arr,start+1,len));
}
int main()
{
	int arr[22];
	int i,n,sumOfArray;
	printf("enter array size.\n");
	scanf("%d",&n);
	printf("enter %d elements.\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sumOfArray=sum(arr,0,n);
	printf("sum of array:%d\n",sumOfArray);
	return 0;
}
