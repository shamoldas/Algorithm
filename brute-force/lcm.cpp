#include<stdio.h>
main()
{
    int a,b,n,i,gcd,lcm;
    printf("input two integer:\n");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            gcd=i;
    }
    lcm=(a*b)/gcd;
    printf("  %d and %d GCD  is= %d and LCM:%d .\n",a,b,gcd,lcm);
    return 0;
}

