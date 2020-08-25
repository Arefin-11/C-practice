#include<stdio.h>
main()
{
    int n,i,j,p=1;
    printf("Enter the number of Rows: ");
    scanf("%d",&n);
    if (n<1)
    {
        printf("Invalid Input");
        return 0;
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<p;j++)
        {
            printf ("* ");
        }
        printf("\n");
        p=p*2;
    }
}
