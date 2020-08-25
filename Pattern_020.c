#include<stdio.h>
main()
{
    int n,i,j,a=1;
    printf ("Enter the value of Row: ");
    scanf ("%d",&n);
    for (i=n;i>0;i--)
    {
        for (j=i;j>0;j--)
        {
            printf ("%d   ",a);
            a++;
        }
        printf("\n");
        if (i<n)
            a=a+(n-i);
    }
}
