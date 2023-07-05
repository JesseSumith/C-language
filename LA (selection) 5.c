#include<stdio.h>
main()
{
    int no;
    no=0;

    printf("enter a number :");
    scanf("%d",&no);

    if (no>0)
        printf("%d is a positive number",no);
    else
        printf("%d is a negative number",no);
    printf("\n");
}
