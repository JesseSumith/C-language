#include <stdio.h>
main()
{
    int age;
    age=0;

    printf("Enter your age:");
    scanf("%d",&age);

    if(age>=18)
        printf("\ncongratulations! \"you are eligible\" for casting your vote");
    else
        printf("\nops! \"you are too young\" to vote.");

    printf("\n");
}
