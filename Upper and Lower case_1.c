#include<stdio.h>
main()
{
int a,b,c;
printf("Enter a Letter:");
scanf("%c",&a);
if(a>=97 && a<=122)
    {
    b=toupper(a);
    printf("Uppercase is:%c",b);
    }
else if(a>=65 && a<=90)
    {
    b=tolower(a);
    printf("Lowercase is:%c",b);
    }
else
    printf("Invalid Input");
}
