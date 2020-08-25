#include<stdio.h>
main()
{
long long int a,b,i,j,c=1,d=1,npr;
printf("Enter the value of n:");
scanf("%lld",&a);
printf("Enter the value of r:");
scanf("%lld",&b);
for(i=1;i<=a;i++)
    c=c*i;
for(j=1;j<=(a-b);j++)
    d=d*j;
npr=c/d;
printf("\nPermutation of %lld and %lld is:%lld\n",a,b,npr);
}
