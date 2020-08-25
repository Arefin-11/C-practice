#include<stdio.h>
main()
{
int a,b;
printf("Enter a Letter:");
scanf("%c",&a);
if(a>=97 && a<=122)
    {
    b=a-32;
    printf("Uppercase is:%c",b);
    }
else if(a>=65 && a<=90)
    {
    b=a+32;
    printf("Lowercase is:%c",b);
    }
else
    printf("Invalid Input");
}
