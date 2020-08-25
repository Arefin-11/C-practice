#include<stdio.h>
main()
{
int p,i,j,k,l=0,min,max,m,n,z;
printf("If Ascending enter 1 or if Descending enter 2 :");
scanf("%d",&p);
if (p<1 || p>2)
    printf("\tInvalid Input");
else
{
printf("How many numbers:");
scanf("%d",&n);
int a[n],b[n];
printf("Enter Numbers:");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
if( p==1 )
{
for(k=0;k<n;k++)
{
z=0;
min=a[k];
for(j=k;j<n;j++)
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
printf("\nAccording to order:");
for(m=0;m<n;m++)
    printf("%d ",b[m]);
}
else if( p==2 )
{
   for(k=0;k<n;k++)
{
z=0;
max=a[k];
for(j=k;j<n;j++)
{
    if(max<a[j])
       {
       max=a[j];
       z=j;
       }
}
       b[l]=max;
       l++;
       a[z]=a[k];
       }
printf("\nAccording to order:");
for(m=0;m<n;m++)
    printf("%d ",b[m]);
}
}
}

