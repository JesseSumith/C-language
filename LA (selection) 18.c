#include <stdio.h>
int main()
{
    float id,u,tc,x,sa,na;
    id=u=tc=x=sa=na=0;
    char n[50];

    printf("Input Customer Id : ");
    scanf("%f",&id);

    printf("Input Customer Name : ");
    scanf("%s",&n);

    printf("Input units consumed : ");
    scanf("%f",&u);

    if (u<=199)
        {
            x=1.20;
            tc=u*x;
        }
    if (u>=200 && u<400)
        {
            x=1.50;
            tc=u*x;
        }

    if (u>=400 && u<600)
        {
            x=1.80;
            tc=u*x;
        }

    if (u>=600)
        {
            x=2.00;
            tc=u*x;
        }

    printf("\nCustomer IDNO : %.0f",id);
    printf("\nCustomer Name : %s",n);

    printf("\nUnits Consumed : %.2f",u);
    printf("\n");
    printf("\nAmount Charges @Rs%.2f per unit : %.2f",x,tc);
    printf("\n");
     if (tc>=100)
     {
         sa=tc*15/100;
         na=tc+sa;
         printf("\nSurcharge Amount is : %.2f",sa);
         printf("\nNet Amount paid by the Customer : %.2f",na);
     }
    else
        printf("\nThe minimum bill should be Rs 100/-");
    printf("\n");
}

