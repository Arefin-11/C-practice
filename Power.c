#include<stdio.h>
main()
{
    int x,n,s=1,i;
    printf("Enter the value of base,x: ");
    scanf("%d",&x);
    printf("Enter the value of power,n: ");
    scanf("%d",&n);
    if (n>=0)
    {
    for(i=0;i<n;i++)
        s=s*x;
    printf("\nValue of %d to the power %d is: %d\n",x,n,s);
    }
    else
        return 0;
}
