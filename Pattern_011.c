#include<stdio.h>
main()
{
    int n,m,i,j;
    printf("Enter the number of Row: ");
    scanf("%d",&n);
    printf("Enter the number of column: ");
    scanf("%d",&m);
    if (n<1 || m<1)
    {
        printf("\nInvalid Input!\n");
        return 0;
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            if (i==1 || i==n || j==1 || j==m)
                printf("* ");
            else
                printf("  ");
        }
        printf ("\n");
    }
}
