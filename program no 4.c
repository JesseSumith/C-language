//program to work with variables
#include <stdio.h>
main()
{
    int a,b,c,d,e,billamt;
    a=b=c=d=e=billamt=0;
    printf("amount spent on breakfast....:");
    scanf("%d",&a);
    printf("amount spent on drink....:");
    scanf("%d",&b);
    printf("amount spent on waterbottle....:");
    scanf("%d",&c);
    printf("amount spent on lunch....:");
    scanf("%d",&d);
    printf("amount spent on movie tickets....:");
    scanf("%d",&e);
    billamt=a+b+c+d+e;
    printf("total expenditure....:%d\n",billamt);

    }
