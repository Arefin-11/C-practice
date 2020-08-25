#include<stdio.h>
#include<math.h>
main(void)
{
    int x[2],y[2],p,n;
    for (n=1;n<=2;n++)
    {
        scanf("%d%d",&x[n],&y[n]);
        printf("\n");
    }
    p=((x[2]-x[1])(x[2]-x[1])+(y[2]-y[1])(y[2]-y[1]));
    printf("%.3f",p);
    return 0;
}
