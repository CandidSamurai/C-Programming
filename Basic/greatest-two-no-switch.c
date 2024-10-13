#include <stdio.h>
int main()
{
    int a,b;

    printf("enter the number: ");
    scanf("%d %d",&a,&b);

    switch(a>b)
    {
        case 0:
         printf("the number %d is greater.",b);
         break;

        case 1:
         printf("the number %d is greater.",a);
         break;

    }

    return 0;
}