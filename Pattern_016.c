#include<stdio.h>
main()
{
    int n,i,j,k;
    printf ("Enter number of Row: ");
    scanf("%d",&n);
        for (i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for (k=1;k<=i;k++)
        {
           if (i%2==0)
                printf("< ");
           else
                printf("> ");
        }
        printf("\n");
    }

    for (i=1;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            printf(" ");
        }
        for (k=1;k<=n-i;k++)
        {
            if (i%2==0)
                printf("> ");
           else
                printf("< ");
        }
        printf("\n");
    }
}
