#include <stdio.h>
main()
{
int i,a,b,sum=0;
printf("summation start from:");
scanf("%d",&a);
printf("summation Ends at:");
scanf("%d",&b);
for(i=a;i<=b;i++)
 {
 sum=sum+i;
 }
printf("Summation from %d to %d is=%d",a,b,sum);
}
