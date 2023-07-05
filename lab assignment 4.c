// progamming with variables
#include<stdio.h>
int main ()
{
    float a,b,c,d,e,total,average;
    printf("enter the marks of english....:");
    scanf("%f",&a);
    printf("enter the marks of sanskrit...: ");
    scanf("%f",&b);
    printf("enter the marks of maths...:");
    scanf("%f",&c);
    printf("enter the marks of physics....: ");
    scanf("%f",&d);
    printf("enter the marks of chemistry....: ");
    scanf("%f",&e);
    printf("\n");
    total=a+b+c+d+e;
    printf("total marks obtained in all subjects...:%f",total);
    printf("\n");
    printf("\n");
    average=a+b+c+d+e/5;
    printf("average marks of all the subjects...:%f",average);
    printf("\n");

}
