#include<stdio.h>
main()
{
    int n,a,b,c[100],sum=0,i,j,k,p=0;
    printf("(1^2*2!)+(2^2*3!)+......+(n^2*(n+1)!)=?");
    printf("\n\nEnter the value of n:");
    scanf("%d",&n);
    if (n>17)
        {
        printf("\nSorry,Summation is too big!!\n");
        return 0;
        }
    for (i=1;i<=n;i++)
    {
        a=i*i;
        b=1;
        for (j=(i+1);j>0;j--)
            {
                 b=b*j;
            }
        c[p]=a*b;
        p++;
    }
    for (k=0;k<p;k++)
        sum=sum+c[k];
    printf("\nSummation of the series is: %d\n",sum);
}
