#include <stdio.h>
main()
{
    int sprice,vprice;
    sprice=vprice=0;

    printf("Enter the price of Samsung mobile : ");
    scanf("%d",&sprice);

    printf("Enter the price of Vivo mobile : ");
    scanf("%d",&vprice);

    if(sprice>vprice)
        printf("\nsamsung mobile is costlier ");
    else
        if(sprice<vprice)
            printf("\nvivo mobile is costlier ");
        else
            printf("\nBoth are the same price ");

    printf("\n");
}
