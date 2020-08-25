#include<stdio.h>
main()
{
int a,b,c;
printf("Enter First Number :");
scanf("%d",&a);
printf("Enter Second Number :");
scanf("%d",&b);
printf("Enter Third Number :");
scanf("%d",&c);
if(a<b && a<c)
 printf("Minimum number among these three is %d",a);
 else
 if(b<c)
  printf("Minimum number among these three is %d",b);
  else
   printf("Minimum number among these three is %d",c);
}
