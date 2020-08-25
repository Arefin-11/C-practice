#include<stdio.h>
main()
{
    int n,i,j;
    printf ("Enter number of Row or Column: ");
    scanf ("%d",&n);
    if(n<1)
    {
        printf("Invalid Input\n");
        return 0;
    }
    for (i=0;i<n;i++)
    {
        for (j=1;j<=n;j++)
            printf("%d ",j);
    printf("\n");
    }
}
