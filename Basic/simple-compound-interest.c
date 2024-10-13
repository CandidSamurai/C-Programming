#include <stdio.h>
#include <math.h>

int main()
{
    float p,t,r,si,ci;
    printf("Enter principal amount (p): ");
    scanf("%f", &p);
	
    printf("Enter time in year (t): ");
	scanf("%f", &t);
	
    printf("Enter rate in percent (r): ");
	scanf("%f", &r);

    //calculating simple interest
    si=(p*t*r)/100;
    //calculating compound interest
    ci=p*(pow(1+r/100,t)-1);

    printf("Simple Interest = %f \n", si);
	printf("Compound Interest = %f", ci);

    return 0;
}