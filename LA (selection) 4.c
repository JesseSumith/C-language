#include <stdio.h>
main()
{
    char n1[50],n2[50];
    int a1,a2;
    a1=a2=0;

    printf("enter the names of your friends : ");
    scanf("%s\n%s",&n1,&n2);

    printf("enter their ages : ");
    scanf("%d\n%d",&a1,&a2);


    if(a1>a2)
        printf("\n%s is older..",n1);
    else
        if(a1<a2)
            printf("\n%s is older..",n2);
        else
            printf("\nBoth are the same age ");

    printf("\n");
}
