#include <stdio.h>
int main()
{
    int ch;
    float c,f;
    printf("ENTER 1 TO COVERT TEMP IN celsius TO fahrenheit\n");
    printf("Enter 2 to covert fahrenheit to degree");
    scanf("%f",&ch);

    switch(ch)
    {
        case 1:
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("%f",c);
        break;

        case 2:
        f=c*9/5-32;
        printf("%f",f);
        break;
    }
    return 0;
}