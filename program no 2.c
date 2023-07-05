//program to work with variables
#include <stdio.h>
main()
{
    int mobile,charger,screengaurd,billamt;
    mobile=charger=screengaurd=billamt=0;
    printf("enter price of mobile....:");
    scanf("%d",&mobile);
    printf("enter price of charger....:");
    scanf("%d",&charger);
    printf("enter price of screengaurd.....:");
    scanf("%d",&screengaurd);
    billamt=mobile+charger+screengaurd;
    printf("totalamount is....:%d\n",billamt);}


