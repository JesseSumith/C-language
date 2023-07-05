// program to read basics salary of an employee

  #include<stdio.h>

main()
{
    float a,hra,da,pf;
    a=hra=da=pf=0;
    float gs,ns;

    printf("enter the basic salary .....: ");
    scanf("%f",&a);

    hra=0.2*a;
    da=0.1*a;
    pf=0.05*a;

    gs=a+hra+da;
    printf("gross salary is...:%f\n",gs);

    ns=gs-pf;
    printf("net salary is.....:%f\n",ns);

    return 0;
}
