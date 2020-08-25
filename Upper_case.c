#include<stdio.h>
main()
{
int a,b,c,d;
printf("Enter a Letter:");
scanf("%c",&a);
if(a>=97 && a<=122)
    {
    b=a-32;
    printf("\nUppercase is: %c",b);
    }
else if(a>=65 && a<=90)
    {
    b=a+32;
    printf("\nLowercase is: %c",b);
    }
else
    printf("\nInvalid Input");
}
