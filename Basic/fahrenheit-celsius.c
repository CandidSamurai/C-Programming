#include <stdio.h>
int main()
{
    float c,f;
    printf("ENTER THE TEMPERATURE IN F:");
    scanf("%f",&f);

    c=(f-32)*5/9;
    printf("TEMPERATURE IN CELSIUS: ",c);

    return 0;
}