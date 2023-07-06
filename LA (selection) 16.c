#include <stdio.h>
main()
{
    char x;

    printf("Enter a single character input : ");
    scanf("%c",&x);

    if (!((x>=65 && x<=90) || (x>=97 && x<=122)))
          printf("\n\a Invalid input");
    else
    {
        if (x="a"  )
            printf("%c is a vowel ",x);
        else
            printf("%c is a consonant",x);
    }

    printf("\n");
}
