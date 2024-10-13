// Program to find the sum of ASCII value of a given string

#include <stdio.h>  
int main()  
{  
    int sum=0;
    char name[20];
    int i;

    printf("Enter the Name: ");
    scanf("%s",name);

    while(name[i] != '\0')
    {
        printf("the ascii value of character %c is %d.\n",name[i],name[i]);
        sum += name[i];
        i++;
    }
    printf("sum of the ascii value of the string is: %d",sum);
    return 0;
}  