#include<stdio.h>
main()
{
    int r,c,R,C,m,n;
    printf ("Enter the Number of Row of First Matrix: ");
    scanf ("%d",&r);
    printf ("Enter the Number of Column of First Matrix: ");
    scanf ("%d",&c);
    printf ("Enter the Number of Rom of Second Matrix: ");
    scanf ("%d",&R);
    printf ("Enter the Number of Column of Second Matrix: ");
    scanf ("%d",&C);
    if (c==R)
    {
        m=r;
        n=C;
        int a[r][c],b[R][C],mul[m][n],i,j,k,l,o,p;
        printf ("\nInput First Matrix: \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
               {
                   scanf("%d",&a[i][j]);
               }
        }

        printf ("\nInput Second Matrix: \n");
        for (k=0;k<R;k++)
        {
            for(l=0;l<C;l++)
                scanf("%d", &b[k][l]);
        }
        {


        }



    }
    else
    {
        printf ("\nMultiplication is not possible\n");
        return 0;
    }
}
