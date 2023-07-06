#include <stdio.h>
main()
{
    int floor;
    floor=0;

    printf("Enter your Floor number : ");
    scanf("%d",&floor);

    if (floor<=50)
           {
            if (floor%2==0)
                      printf("\nHey you have \"Beach view\" for your flat");
            else
                       printf("\nHey you have \"Forest view\" for your flat");
           }
    else
             printf("\nWe only have 50 floors");

    printf("\n");
}
