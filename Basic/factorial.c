#include <stdio.h>
int main()
{
    int n,i,factorial=1;
    printf("enter a positive integer: ");
    scanf("%d",&n);

    if (n<0)
    {
        printf("invalid number.");
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            factorial*=i;
        }
        printf("factorial of %d is %d",n,factorial);
    }
    return 0;
}