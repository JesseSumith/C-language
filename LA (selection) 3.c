#include <stdio.h>
main()
{
    int sales,dis,finalamt;
    sales=dis=finalamt=0;

    printf("Enter the sale amount : ");
    scanf("%d",&sales);

    if (sales>=25000)
       {
        dis=sales*10/100;
        finalamt=sales-dis;
        }
    else
       {
        dis=sales*5/100;
        finalamt=sales-dis;
       }
    printf("discount is :%d",dis);
    printf("\nfinal amount is :%d",finalamt);
    printf("\n");

}
