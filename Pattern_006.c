#include<stdio.h>
main()
{
    int n,i,j,k;
    printf ("Enter number of Row: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for (k=(n-i);k>0;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
