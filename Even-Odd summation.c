#include<stdio.h>
main()
{
int ll,ul,i,a,esum=0,osum=0,sum=0;
printf("Enter the value of lower limit :");
scanf("%d",&ll);
printf("Enter the value of uper limit :");
scanf("%d",&ul);
for(i=ll;i<=ul;i++)
 {
 if(i>=0)
 {
 if(i%2==0)
 esum=esum+i;
 else
 osum=osum+i;
 }
 }
 for(a=ll;a<=ul;a++)
  {
  sum=sum+a;
  }
 printf("\n\nEven Summation from %d to %d is %d",ll,ul,esum);
 printf("\n\nOdd Summation from %d to %d is %d",ll,ul,osum);
 printf("\n\nTotal Summation from %d to %d is %d\n",ll,ul,sum);
 }
