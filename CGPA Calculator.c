# include <stdio.h>
main()
{
    int a,b,i;
    printf("\nWelcome to Arefin's Calculator\n");
    for (i=0;i<9;i++)
    {
        printf("\nWhat do you want to Calculate?\n");
        printf("1. Money Calculation\n2. CGPA Calculatison\n\n");
        scanf("%d",&a);
        if (a==1)
        {
            printf("%d",a);
        }
        else if (a==2)
        {
            int z=0;
            float c[8],d[8],e=0.00,f=0.00,g=0.00;
            for (z=0;z<8;z++)
            {
                printf("Input the CGPA:");
                scanf("%f",&c[z]);
                printf("Input the Credit:");
                scanf("%f",&d[z]);
            }
            for (z=0;z<8;z++)
            {
                e=(c[z]*d[z])+e;
                f=d[z]+f;
                g=e/f;
            }
            printf("\nYour Avg. CGPA is %.2f",g);
        }
        else
        printf("Wrong Input");
        printf("\n\nDo you want to Continue?\n1=Yes, 2=No\n");
        scanf("%d",&b);
        if (b==1)
            i=0;
        if (b==2)
            break;
    }
    return 0;
}
