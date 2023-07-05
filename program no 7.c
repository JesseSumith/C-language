# include <stdio.h>
main()
{
    char name[50];
    char gender[2];
    char city[20];

    printf("Enter the full name of the student....: ");
    scanf("%[^\n]",name);

    printf("Enter the gender of the student(M/F)...:");
    scanf("%s",gender);

    printf("Enter the city of the student.....:");
    scanf("%s",city);
    printf("\n");
    printf("STUDENT INFORMATION");
    printf("\nFull name.....:%s",name);
    printf("\nGender......:%s",gender);
    printf("\nCity........:%s",city);
    printf("\n");
}
