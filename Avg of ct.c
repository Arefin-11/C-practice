#include<stdio.h>
main()
{
int a[4],b[4],i,j,k,l,m,z,min,avg;
printf("Enter marks of 1st CT:");
scanf("%d",&a[0]);
printf("Enter marks of 2nd CT:");
scanf("%d",&a[1]);
printf("Enter marks of 3rd CT:");
scanf("%d",&a[2]);
printf("Enter marks of 4th CT:");
scanf("%d",&a[3]);
for(k=0;k<4;k++)
{
z=0;
min=a[k];
for(j=k;j<4;j++)
{
    if(min>a[j])
       {
       min=a[j];
       z=j;
       }
}
       b[l]=min;
       l++;
       a[z]=a[k];
       }
avg=(a[1]+a[2]+a[3])/3;
printf("\nAvg of best 3 CT marks is:%d\n",avg);
}
