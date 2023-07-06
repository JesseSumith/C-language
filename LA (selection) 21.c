#include <stdio.h>
main()
{
    int bs,al,ded,exp,b;
    bs=al=ded=exp=b=0;

    float gs,ns,T;
    gs=ns=T=0;

    printf("Enter your basic salary : ");
    scanf("%d",&bs);

    printf("Enter your allowances : ");
    scanf("%d",&al);

    printf("Enter your deductions : ");
    scanf("%d",&ded);

    printf("Enter your experience : ");
    scanf("%d",&exp);

    gs=bs+al;
    ns=gs-ded;

    if (exp>=5)
        b=3*ns;
    if (exp>=3 && exp<5)
        b=2*ns;
    if (exp<3)
        b=ns;

    T=ns+b;

    printf("\nGross Salary is :  %.2f",gs);
    printf("\nNet Salary is :  %.2f",ns);
    printf("\nTotal salary with bonuses is : %.2f",T);
    printf("\n");
}
