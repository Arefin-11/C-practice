#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter the number of Row: ");
    scanf("%d",&n);
    if (n<1)
    {
        printf("\nInvalid Input!\n");
        return 0;
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if (i==1 || i==n || j==1 || j==n)
                printf("* ");
            else
                printf("  ");
        }
        printf ("\n");
    }
}
