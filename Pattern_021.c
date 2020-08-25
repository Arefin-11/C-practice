#include<stdio.h>
main()
{
    int n,i,j,k;
    printf("Enter the number of Row: ");
    scanf("%d",&n);
    for (i=n;i>0;i--)
    {
        for (j=i-1;j>0;j--)
            printf(" ");
        for (k=i;k<=n;k++)
            printf("%d",k);
    printf("\n");
    }
}
