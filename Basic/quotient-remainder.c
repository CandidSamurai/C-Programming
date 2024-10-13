#include <stdio.h>
int main()
{
    int dividend,divisior,quotient,remainder;

    printf("enter the dividend: ");
    scanf("%d",&dividend);

    printf("enter the divisior: ");
    scanf("%d",&divisior);

    quotient= dividend/divisior;

    remainder= dividend%divisior;
    
    printf("quotient= %d \n",quotient);
    printf("remainder= %d",remainder);

    return 0;

}