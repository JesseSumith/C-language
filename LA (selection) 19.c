#include <stdio.h>
main()
{
    int s1,s2,s3,t;
    s1=s2=s3=t=0;
    float avg;

    printf("Enter your marks in subject 1 : ");
    scanf("%d",&s1);

    printf("Enter your marks in subject 2 : ");
    scanf("%d",&s2);

    printf("Enter your marks in subject 3 : ");
    scanf("%d",&s3);
    printf("\n");
    t=s1+s2+s3;

    printf("Total marks obtained : %d",t);

    avg=t/3;
    printf("\n");
    printf("\nAverage is : %.2f",avg);
    printf("\n");

    if (avg>90)
        printf("\nGrade is A+",avg);

    if (avg>80 && avg<=90)
        printf("\nGrade is A",avg);

    if (avg>70 && avg<=80)
        printf("\nGrade is B",avg);

    if (avg>60 && avg<=70)
        printf("\nGrade is C",avg);

    if (avg>50 && avg<=60)
        printf("\nGrade is D",avg);

    if (avg<=50)
        printf("\nGrade is F",avg);

    printf("\n");
}
