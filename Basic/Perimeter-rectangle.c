// PERIMETER OF A RECTANGLE

#include <stdio.h>

int main()
{
    int l;
    int b;

    printf("Enter length of the rectangle:");
    scanf("%d", & l);

    printf("Enter breadth of the rectangle:");
    scanf("%d", & b);

    printf("Perimeter of the Rectangle is = %d", 2 * l + 2 * b);
    return 0;

}