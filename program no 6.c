// program to find the total and average of intermediate marks

# include <stdio.h>
main()
{
    int m1a,m1b,phy1,che1,eng1,san1;
    int m2a,m2b,phy2,che2,eng2,san2;
    float total,average;

    printf("enter marks for maths 1 A (max marks-75) ...: ");
    scanf("%d",&m1a);

     printf("enter marks for maths 1 B (max marks-75) ...: ");
    scanf("%d",&m1b);

     printf("enter marks for physics first year (max marks-60) ...: ");
    scanf("%d",&phy1);

     printf("enter marks for chemistry first year  (max marks-60) ...: ");
    scanf("%d",&che1);

     printf("enter marks for english in first year (max marks-100) ...: ");
    scanf("%d",&eng1);

     printf("enter marks for sanskrit in first year (max marks-100) ...: ");
    scanf("%d",&san1);

     printf("enter marks for maths 2 A (max marks-75) ...: ");
    scanf("%d",&m2a);

     printf("enter marks for maths 2 B (max marks-75) ...: ");
    scanf("%d",&m2b);


     printf("enter marks for physics second year (max marks-60) ...: ");
    scanf("%d",&phy2);

     printf("enter marks for chemistry second year  (max marks-60) ...: ");
    scanf("%d",&che2);

     printf("enter marks for english in second year (max marks-100) ...: ");
    scanf("%d",&eng2);

     printf("enter marks for sanskrit in second year (max marks-100) ...: ");
    scanf("%d",&san2);

    total=m1a+m1b+phy1+che1+eng1+san1+m2a+m2b+phy2+che2+eng2+san2;
    printf("total marks ....:%.0f\n",total);

    average=total/12;
    printf("average is ...:%.4f",average);

}
