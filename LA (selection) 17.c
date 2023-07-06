#include<stdio.h>
main()
{
    int y;

    printf("Enter your year of birth : ");
    scanf("%d",&y);

    if (y%4==0)
        printf("\nHey you were born in a leap year");
    else
        printf("\nyou are not born in a leap year");
    printf("\n");
}
