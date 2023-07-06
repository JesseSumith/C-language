#include <stdio.h>
main()
{
    int s,d,T;
    s=d=T=0;

    printf("Enter your sales : ");
    scanf("%d",&s);

    if (s>=25000)
        d=s*25/100;
    if (s>=20000 && s<25000)
        d=s*20/100;
    if (s>=10000 && s<20000)
        d=s*10/100;
    if (s>=5000 && s<10000)
        d=s*5/100;
    if (s<5000)
        d=0;

    T=s-d;

    printf("Discount is : %d",d);
    printf("\nActual amount is : %d",T);
    printf("\n");

}
