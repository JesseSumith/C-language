#include <stdio.h>
main()
{
    int T;
    T=0;

    printf("Enter the temperature in centigrade : ");
    scanf("%d",&T);
    printf("\n");
    if (T<0)
        printf("Freezing weather");
    if (T>0 && T<10)
        printf("Very Cold Weather");
    if (T>10 && T<20)
        printf("Cold weather");
    if (T>20 && T<30)
        printf("Normal weather");
    if (T>30 && T<40)
        printf("Its hot");
    if (T>=40)
        printf("Its very hot");

    printf("\n");

}
