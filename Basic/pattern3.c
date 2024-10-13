#include <stdio.h>
int main()
{
    int i,j,row;
    
    scanf("%d",& row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=row; j++)
        {
            if((i+j)<=5)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}