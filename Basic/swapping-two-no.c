// using 3rd variable

#include <stdio.h>
int main()
{
    int x,y,temp;
    printf("enter the numbers: \n");
    scanf("%d %d",&x,&y);
    printf("x=%d, y=%d\n",x,y);

    temp=x;
    x=y;
    y=temp;
    
    printf("x=%d, y=%d\n",x,y);
    return 0;
}


