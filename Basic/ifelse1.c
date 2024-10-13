#include <stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d", & a);

    if (a>0)
    {
        printf("THE NUMBER IS POSITIVE");
    }

    else if (a==0)
    {
        printf("THE NUMBER IS 0.");
    }

    else
    {
        printf("THE NUMBER IS NEGATIVE.");
    }
    return 0;
}