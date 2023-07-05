#include <stdio.h>
main()
{
    int a,b,c;
    a=b=c=0;

    printf("Enter the rating of movie 1(1-10) : ");
    scanf("%d",&a);

    printf("Enter the rating of movie 2(1-10) : ");
    scanf("%d",&b);

    printf("Enter the rating of movie 3(1-10) : ");
    scanf("%d",&c);
    printf("\n");
    if (a>b)
    {
        if (a>c)
            printf("Movie 1 is hit  : %d ",a);
        else
             printf("Movie 3 is hit: %d ",c);
    }
    else
       {
           if (b>c)
             printf("Movie 2 is hit : %d ",b);
           else
            printf("Movie 3 is hit : %d ",c);
       }

    printf("\n");

}
