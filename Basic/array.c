#include <stdio.h>
int main()
{
    int marks[3];
    printf("enter phy marks:");
    scanf("%d",& marks[0]);

    printf("enter chem marks:");
    scanf("%d",& marks[1]);

    printf("enter maths marks:");
    scanf("%d",& marks[2]);

    printf("phy=%d, chem=%d, maths=%d",marks[0],marks[1],marks[2]);

    return 0;

}