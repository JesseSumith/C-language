//program to work with variables
#include <stdio.h>
main()
{
    int a,b,billamt;
    a=b=billamt=0;
    printf("amount given....:");
    scanf("%d",&a);
    printf("amount spent....:");
    scanf("%d",&b);
    billamt=a-b;
    printf("totalamount is....:%d\n",billamt); }
