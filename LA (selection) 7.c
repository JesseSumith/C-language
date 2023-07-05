# include <stdio.h>
main ()
{
     int no;
    no=0;

    printf("Enter a number : ");
    scanf("%d",&no);
    printf("\n");


    if (no%3==0)
    {
        if (no%5==0)
            printf("%d is divisible by both 3 and 5",no);
        else
            printf("%d is divisible only by 3 but not 5",no);
    }

    else
        {
            if (no%5==0)
                printf("%d is divisible only by 5 but not 3 ",no);
            else
                printf("\a%d is neither divisible by 3 nor 5",no);
        }
   printf("\n");


}
