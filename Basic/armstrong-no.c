#include <stdio.h>
int main()
{
    int num, original, result=0;

    printf("enter the number: ");
    scanf("%d",&num);
    original=num;

    while(num>0){
        result += (num%10)*(num%10)*(num%10);
        num /=10;
    }

    if(result==original){
        printf("%d is an armstrong number.",original);
    }
    else{
        printf("%d is not an armstrong number.",original);
    }
    return 0;
}