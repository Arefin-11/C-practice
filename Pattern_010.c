#include<stdio.h>
main()
{
    int n,i,j,k=1,l;
    printf("Enter the number of Row('MUST be an Odd & >5 integer'): ");
    scanf("%d",&n);
    l=n;
    if (n<6 || n%2==0)
    {
        printf("\nInvalid Input!\n");
        return 0;
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if (i==1 || i==n || j==1 || j==n || j==k || j==l || j==(n/2+1) || i==(n/2+1))
                printf("* ");
            else
                printf("  ");
        }
        printf ("\n");
        k++;
        l--;
    }
}
