#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter the number of Row: ");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Invalid Input\n");
        return 0;
    }
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
        printf("\n");
    }
}
