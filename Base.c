#include<stdio.h>
main()
{
    printf("Welcome to Base conversion");
int m;
printf("\n\nPress 1 for Decimal to binary\nPress 2 for Decimal to Octal\nPress 3 for Decimal to Hexadecimal\nPress 4 for Binary  to Decimal\nPress 5 for Octal   to Decimal\nPress 6 for Hexadecimal to Decimal\n\nEnter your choice:");
scanf("%d",&m);
if(m==1)
{
    int a,b[100],i,j,n;
    printf("Enter a decimal number:");
    scanf("%d",&a);
    n=a;
    if(a>=0)
    {
        for(i=0;i<100;i++)
        {
            b[i]=a%2;
            a=a/2;
            if(a==0)
                break;

        }
        printf("Binary value of %d is :",n);
        for(j=i;j>=0;j--)
            printf("%d",b[j]);
            printf("\n");
    }
    else
        printf("Decimal to Binary conversion is not possible\n");
}

if(m==2)
{
    int a,b[100],i,j,n;
    printf("Enter a decimal number:");
    scanf("%d",&a);
    n=a;
    if(a>=0)
    {
        for(i=0;i<100;i++)
        {
            b[i]=a%8;
            a=a/8;
            if(a==0)
                break;

        }
        printf("Octal value of %d is :",n);
        for(j=i;j>=0;j--)
            printf("%d",b[j]);
            printf("\n");
    }
    else
        printf("Decimal to Octal conversion is not possible\n");
}

if(m==3)
{
    int a,b[100],i,j,n;
    printf("Enter a decimal number:");
    scanf("%d",&a);
    n=a;
    if(a>=0)
    {
        for(i=0;i<100;i++)
        {
            b[i]=a%16;
            a=a/16;
            if(a==0)
                break;

        }
        printf("Hexadecimal value of %d is :",n);
        for(j=i;j>=0;j--)
            {
                if (b[j]<10)
                    printf("%d",b[j]);
                if(b[j]==10)
                    printf("A");
                if(b[j]==11)
                    printf("B");
                if(b[j]==12)
                    printf("C");
                if(b[j]==13)
                    printf("D");
                if(b[j]==14)
                    printf("E");
                if(b[j]==15)
                    printf("F");
                }
            printf("\n");
    }
    else
        printf("Decimal to Hexadecimal conversion is not possible\n");
}

if(m==4)
{
    int long a,b[100],c[100],i,j,n,x,k,l,sum=0;
    printf("Enter a binary number:");
    scanf("%ld",&a);
    n=a;
    for(i=0;i<100;i++)
      {
         b[i]=a%10;
         a /=10;
         if (a==0)
         break;
      }
    if(n>=0)
    {
     for(j=0;j<=i;j++)
     {
         if(b[j]<0 || b[j]>1)
         {
             printf("Invalid Binary Input\n");
             return 0;
         }
         x=1;
         for(k=1;k<=j;k++)
            x=x*2;
         c[j]=b[j]*x;
     }
     for(l=0;l<=i;l++)
        sum=sum+c[l];
        printf("Decimal value of %ld is :%ld",n,sum);
            printf("\n");
    }
    else
        printf("Binary to Decimal conversion is not possible\n");
}

if(m==5)
{
    int long a,b[100],c[100],i,j,m,n=0,x,k,l;
    printf("Enter a Octal number:");
    scanf("%ld",&a);
    m=a;
    for(i=0;i<100;i++)
      {
         b[i]=a%10;
         a /=10;
         if (a==0)
         break;
      }


   if(m>=0)
    {
     for(j=0;j<=i;j++)
     {
         if(b[j]<0 || b[j]>7)
         {
             printf("Invalid Octal Input");
             return 0;
         }
         x=1;
         for(k=1;k<=j;k++)
            x=x*8;
         c[j]=b[j]*x;
     }
     for(l=0;l<=i;l++)
        n=n+c[l];
        printf("Decimal value of %ld is :%ld",m,n);
            printf("\n");
    }
    else
        printf("Octal to Decimal conversion is not possible\n");

}

if(m==6)
{
   unsigned char a;
   printf("Enter a Hexadecimal Number:");
   scanf("%lx",&a);
   if(a>=0)
   {
       	printf("Decimal Value of %lX is:%d\n",a,a);
   }
}


if(m<1 || m>6)
    printf("Invalid Choice input\n");
}
