#include <stdio.h>
main()
{
    int a,b,c,d;
    a=b=c=d=0;

    printf("enter four numbers : ");
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);

    if (a>b)
    {
        if (a>c)
            {
            if (a>d)
                printf("%d is the biggest number",a);
            else
                printf("%d is the biggest number",d);
            }
        else
        {
            if (c>d)
            printf("%d is the biggest number ",c);

            else
                printf("%d is the biggest number ",d);
        }
    }
    else
    {
        if (b>c)
           {
            if (b>d)
                printf("%d is the biggest number",b);
            else
                printf("%d is the biggest number",d);
           }
           else
        {
            if (c>d)
            printf("%d is the biggest number ",c);

            else
                printf("%d is the biggest number ",d);
        }


    }


}
