// program to swap variables

#include<stdio.h>

main()

{
    int a,b;
    a=b=0;

    printf("enter the value of A...:");
    scanf("%d",&a);

    printf("enter the value of B...:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nA is ....:%d",a);
    printf("\nB is.....:%d",b);

}
