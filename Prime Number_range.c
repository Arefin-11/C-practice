#include<stdio.h>
main()
{
int ll,ul,c,i,j;
printf("Enter Lower limit:");
scanf("%d",&ll);
printf("Enter Uper limit:");
scanf("%d",&ul);
if(ll<=ul)
{
for(i=ll;i<=ul;i++)
    {
    if(i<=1)
    printf("\n %d is not a prime number",i);
    else
    {
    c=0;
    for(j=2;j<i;j++)
    {
    if(i%j==0)
    c++;
    }
    if(c==0)
    printf("\n %d is a prime number",i);
    else
    printf("\n %d is not a prime number",i);
    }
    }
    }
else
 printf("Invalid Limit");
}
