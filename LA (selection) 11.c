#include<stdio.h>
main()
{
    int cp,sp,a;
    cp=sp=a=0;

    printf("Enter Cost Price : ");
    scanf("%d",&cp);

    printf("Enter Selling Price : ");
    scanf("%d",&sp);
    printf("\n");
     if (sp>cp)
    {   a=sp-cp;
        printf("Hey! You have made a profit of Rs %d /-",a);
    }
    else
    {  if (cp>sp)
        {
        a=cp-sp;
        printf("Oops! You Incurred a loss of Rs %d /- ",a);
        }
       else
       printf("Hmm! No loss no profit");
    }
     printf("\n");


}
