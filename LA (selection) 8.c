#include <stdio.h>
main()
{
    int a,b,c;
    a=b=c=0;

    printf("Enter the price of Reynolds pen : ");
    scanf("%d",&a);

    printf("Enter the price of Montex pen : ");
    scanf("%d",&b);

    printf("Enter the price of Parker pen : ");
    scanf("%d",&c);
    printf("\n");
    if (a>b)
    {
        if (a>c)
            printf("Reynolds  is the costliest pen : %d ",a);
        else
             printf("Parker  is the costliest pen : %d ",c);
    }
    else
       {
           if (b>c)
             printf("Montex is the costliest pen : %d ",b);
           else
            printf("Parker  is the costliest pen : %d ",c);
       }

    printf("\n");

}
