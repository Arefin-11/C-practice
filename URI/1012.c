#include<stdio.h>
#define PI 3.14159
main(void)
{
    double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%lf%lf%lf",&A,&B,&C);
    TRIANGULO=.5*A*C;
    CIRCULO=PI*C*C;
    TRAPEZIO=(A+B)*.5*C;
    QUADRADO=B*B;
    RETANGULO=A*B;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);
    return 0;

}
