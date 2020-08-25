#include<stdio.h>
main()
{
    int n,i,j,k;
    printf("Enter the number of Rows: ");
    scanf("%d",&n);
    printf("\n");
    if (n<1)
    {
        printf("Invalid Input");
        return 0;
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for (k=0;k<n;k++)
            printf("<");
        for(j=n;j>i;j--)
            printf("  ");
        for (k=0;k<n;k++)
            printf(">");
    printf("\n");
    }
    for (i=0;i<=n;i++)
    {
        for(j=n;j>i;j--)
            printf(" ");
        for (k=0;k<n;k++)
            printf(">");
        for(j=0;j<i;j++)
            printf("  ");
        for (k=0;k<n;k++)
            printf("<");
    printf("\n");
    }
}
