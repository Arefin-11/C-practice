#include<stdio.h>
main()
{
    int ll,ul,a,i,j;
    printf("Enter Lower Limit:");
    scanf("%d",&ll);
    printf("Enter Upper Limit:");
    scanf("%d",&ul);
    if (ll>ul || ll<0)
    {
        printf("\nInvalid Input\n");
        return 0;
    }
    if (ul>16)
    {
        ul=16;
        printf(">16! is too big!!\n");
    }
    for (i=ll;i<=ul;i++)
    {
        a=1;
        for (j=i;j>0;j--)
            a=a*j;
        printf("%d! = %d\n",i,a);
    }
}
