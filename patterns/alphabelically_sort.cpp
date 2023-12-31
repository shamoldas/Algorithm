#include<stdio.h>
#include<iostream>
#include<string.h>
using   namespace   std;
main()
{
    int n;
    printf(" how many name do   u want ? :\n");
    scanf("%d",&n);
    char sd[n][22],dummy[22];
    int i=0,j=0;
    printf("enter the %d name\n",n);
    while(i<n)
        scanf("%s",sd[i++]);
        for(i=1;i<n;i++){
            for(j=1;j<n;j++)
            {
                if(strcmp(sd[j-1],sd[j])>0)
                {
                    strcpy(dummy,sd[j-1]);
                    strcpy(sd[j-1],sd[j]);
                    strcpy(sd[j],dummy);
                }
            }
        }
        cout<<"DISPLAY.......\n";
        cout<<"\nafter  sort.\n";
        printf(" alphabetically order list \n\n");
        for(i=0;i<n;i++)
            printf("%s\n",sd[i]);

}
