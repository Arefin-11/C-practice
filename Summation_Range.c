/* Summation of integer in range*/
#include<stdio.h>
main()
{
    int ll,ul,sum=0,i,a;
    printf("Enter Lower Limit: ");
    scanf("%d",&ll);
    printf("Enter Upper Limit: ");
    scanf("%d",&ul);
        if (ll<ul)
        {
        for (i=ll;i<=ul;i++)
            sum=sum+i;
        printf("\nSummation from %d to %d is= %d\n",ll,ul,sum);
        }
    else
        printf("\nInvalid Input\n");
}
