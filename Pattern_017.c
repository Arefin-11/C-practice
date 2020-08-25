#include<stdio.h>
main()
{
    int n,i,j,k;
    printf ("Enter number of Row: ");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for (k=1;k<=(2*i-1);k++)
        {
            if (i%2==0)
                printf(" < ");
           else
                printf(" > ");
        }
        printf("\n");
    }
    for (i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for (k=1;k<=(2*i-1);k++)
        {
            if (i%2==0)
                printf(" > ");
           else
                printf(" < ");
        }
        printf("\n");
    }
}
