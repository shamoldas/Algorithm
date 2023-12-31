#include<stdio.h>
main()
{
    int a,b,n,i,gcd;
    printf("input two integer:\n");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            gcd=i;
    }
    printf("  G.C.D OF %d and %d is= %d .\n",a,b,gcd);
    return 0;
}

