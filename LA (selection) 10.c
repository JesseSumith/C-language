#include<stdio.h>
main()
{
    int a,b,c;
    a=b=c=0;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("\n");
    if (a>b)
    {
        c=a-b;
        printf("%d is the absolute difference ",c);
    }
    else
    {
        c=b-a;
        printf("%d is the absolute difference ",c);
    }
     printf("\n");
}
