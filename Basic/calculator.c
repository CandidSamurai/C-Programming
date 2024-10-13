#include <stdio.h>
int main()
{
    int a,b,c;
    char ch;
    printf("ENTER THE FIRST NUMBER:");
    scanf("%d",&a);
    printf("ENTER THE OPERATOR:");
    scanf("%d",&ch);
    printf("ENTER THE SECOND NUMBER:");
    scanf("%d",&b);
    
    switch (ch)
    {
        case '+':
         c=a+b;
         break;
        case '-':
         c=a-b;
         break;
        case '*':
         c=a*b;
         break;
        case '/':
         c=a/b;
         break;
        default:
          printf("invalid input");
    }
    printf("%d",c);
    return 0;
}