#include<stdio.h>
main()
{
int ll,ul,c,i,j,n=0;
printf("Enter Lower limit:");
scanf("%d",&ll);
printf("Enter Upper limit:");
scanf("%d",&ul);
printf("\n");
if(ll<=ul)
{
for(i=ll;i<=ul;i++)
    {
    if(i>1)
    {
    c=0;
    for(j=2;j<i;j++)
    {
    if(i%j==0)
    c++;
    }
    if(c==0)
    {
        printf("  %d",i);
    }
    }
    }
    }
else
 printf("Invalid Limit");
}
