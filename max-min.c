#include<stdio.h>
main()
{
int i,j,k,min,n,max;
printf("How many numbers:");
scanf("%d",&n);
int a[n];
printf("Enter Numbers:");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
min=a[0];
for(j=0;j<n;j++)
    {
    if(min>a[j])
       min=a[j];
       }
max=a[0];
for(j=0;j<n;j++)
    {
    if(max<a[j])
       max=a[j];
       }
printf("Minimum number is:%d\n",min);
printf("Maximum number is:%d\n",max);
}
