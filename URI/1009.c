#include<stdio.h>
main(void)
{
    char NAME[20];
    double SALARY,SALES,TOTAL;
    scanf("%s%lf%lf",&NAME,&SALARY,&SALES);
    TOTAL=SALARY+(SALES*0.15);
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}

