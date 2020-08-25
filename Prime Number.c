#include<stdio.h>
main()
{
 int a,i,c=0;
 printf("Enter a Number:");
 scanf("%d",&a);
 if (a>1)
    {
    for(i=2;i<a;i++)
    {
    if(a%i==0)
    c++;
    }
    if(c==0)
    printf("%d is a prime number",a);
    else
    printf("%d is not a prime number",a);
    }
else
printf("%d is not a prime number",a);
}
