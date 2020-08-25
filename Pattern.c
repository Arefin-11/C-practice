#include<stdio.h>
main()
{
    int n,a,b,c,d,e,f=0,i,j;
    printf("Enter the Width in odd number:");
    scanf ("%d",&n);
    if(n%2==1)
    {
        a=n-(n/2);
        b=n+(n/2);
        c=b+1;
        d=n*2;
        e=d;
    for (i=0;i<=c;i++)
    {
        for(j=0;j<=d;j++)
        {
            if(i<a)
            {
            if(j==a || j==(a-i) || j==(a+i) || j==b || j==(b-i) || j==(b+i))
                printf("*");
                else
                    printf (" ");
            }
            else
            {
                if(j>=f || j<=e)
                    printf ("*");
                else
                    printf (" ");

            }

        }
        printf("\n");
        f++;
        e--;
    }
    }
    else printf("\nPlease Enter an odd number as width\n");

}
