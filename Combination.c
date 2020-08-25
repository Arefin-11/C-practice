#include<stdio.h>
main()
{
long long int a,b,i,j,k,c=1,d=1,e=1,ncr;
printf("Enter the value of n:");
scanf("%lld",&a);
printf("Enter the value of r:");
scanf("%lld",&b);
for(i=1;i<=a;i++)
    c=c*i;
for(j=1;j<=b;j++)
    d=d*j;
for(k=1;k<=(a-b);k++)
    e=e*k;
ncr=c/(d*e);
printf("\nCombination of %lld and %lld is:%lld\n",a,b,ncr);
}
