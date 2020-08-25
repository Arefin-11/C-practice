#include<stdio.h>
main()
{
    int a=0,b=1,c,n,i;
    printf ("Enter the range:");
    scanf ("%d",&n);
    printf ("\nFibonacci series : 0,1,");
    for(i=0;i<n;i++)
    {
        c=a+b;
        printf ("%d,",c);
        a=b;
        b=c;
    }
    printf ("......\n");
}
