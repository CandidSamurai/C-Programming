#include <stdio.h>
int main()
{
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=98;
    marks[0][2]=95;

    marks[1][0]=94;
    marks[1][1]=92;
    marks[1][2]=99;
    
    printf("%d %d %d\n%d %d %d",marks[0][0],marks[0][1],marks[0][2],marks[1][0],marks[1][1],marks[1][2]);
    
    return 0;
}