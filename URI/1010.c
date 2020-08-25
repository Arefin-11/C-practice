#include<stdio.h>
main(void)
{
    int code[2],quantity[2],n;
    double price[2],total=0;
    for(n=0;n<2;n++)
    {
        scanf("%d%d%lf",&code[n],&quantity[n],&price[n]);
        total+=quantity[n]*price[n];
    }
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;

}
