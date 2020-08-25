#include<stdio.h>
main()
{
int a,i,b[100],j=0,c=0,k;
printf("Enter a number:");
scanf("%d",&a);
if(a>1)
{
for(i=2;i<=a;i++)
    {
    if(a%i==0)
    {
    b[j]=a/i;
    j++;
    }
    }
for(k=0;k<j;k++)
    c=c+b[k];
if(c==a)
    printf("%d is a perfect number",a);
else
    printf("%d is not a perfect number",a);
}
else
    printf("%d is not a perfect number",a);
}
