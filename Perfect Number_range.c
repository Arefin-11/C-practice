#include<stdio.h>
main()
{
int ll,ul,b[100],i,j,k=0,l,c;
printf("Enter lower limit:");
scanf("%d",&ll);
printf("Enter uper limit:");
scanf("%d",&ul);
if(ll<=ul)
{
    for(i=ll;i<=ul;i++)
     {
     if(i<=1)
     printf("\n %d is not a perfect number",i);
     else
     {
      k=0;
      c=0;
     for(j=2;j<=i;j++)
     {
     if(i%j==0)
     {
     b[k]=i/j;
     k++;
     }
     }
for(l=0;l<k;l++)
    c=c+b[l];
if(c==i)
    printf("\n %d is a perfect number",i);
else
    printf("\n %d is not a perfect number",i);
}
}
}
else
    printf("Invalid Limit");
}
