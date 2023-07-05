#include <stdio.h>
main()
{
    int a,b,c;
    a=b=c=0;

    printf("Enter three numbers : ");
    scanf("%d\n%d\n%d",&a,&b,&c);
     printf("\n");
    if (a>b)
    {
        if (a>c)
            {
             if (b>c)
                printf("%d<%d<%d",c,b,a);
             else
                 printf("%d<%d<%d",b,c,a);
            }
        else
            printf("%d<%d<%d",b,a,c);
    }
    else
    {
        if (b>c)
            {
             if (a>c)
                printf("%d<%d<%d",c,a,b);
             else
                 printf("%d<%d<%d",a,c,b);
            }
        else
            printf("%d<%d<%d",a,b,c);
    }

    printf("\n");
}
