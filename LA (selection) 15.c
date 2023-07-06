#include <stdio.h>
main()
{
    char ch;

    printf("Enter a character : ");
    scanf("%c",&ch);

       if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122) || (ch>=48 && ch<=57) )
           {
             if (ch>=65 && ch<=90)
                     printf("\n%c is a capital letter",ch);

             if (ch>=97 && ch<=122)
                     printf("\n%c is a lower case letter",ch);

             if (ch>=48 && ch<=57)
                      printf("\n%c is a digit",ch);
           }

       else
        printf("\n%c is a special character",ch);

    printf("\n");
}
