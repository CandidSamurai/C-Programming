// swapping two numbers without third variable


#include <stdio.h>
int main()
{
    int a,b;

    printf("enter the numbers: \n");
    scanf("%d %d",&a,&b);
    printf("a=%d, b=%d \n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("a=%d, b=%d \n",a,b);

    return 0;

    
}