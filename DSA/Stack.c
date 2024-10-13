#include <stdio.h>

int stack[100],i,choice=0,n,top=-1;

void Push();
void Pop();
void Peek();
void Show();
void isFull();
void isEmpty();

int main(){
    printf("Enter the number of Elements in the Stack: ");
    scanf("%d",&n);
    printf("\n******** Stack Operations ********\n");
    printf("----------------------------------\n");
    while(choice!=7){
        printf("\nChoose from the below options:\n");
        printf(" 1.Push \n 2.Pop \n 3.Peek \n 4.Show \n 5.isFull \n 6.isEmpty \n 7.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                Push();
                break;
            case 2:
                Pop();
                break;
            case 3:
                Peek();
                break;
            case 4:
                Show();
                break;
            case 5:
                isFull();
                break;
            case 6:
                isEmpty();
                break;
            case 7:
                printf("\n--> Exiting....\n");
                break;
            default:
                printf("\n--> Enter a valid choice. \n");
        }
    }
    return 0;
}

void Push(){
    int val;
    if(top == n-1){
        printf("\n--> Overflow, can't push more elements.\n");
    }
    else{
        printf("\n--> Enter the element to push: ");
        scanf("%d",&val);
        top++;
        stack[top]=val;
    }
}

void Pop(){
    if(top == -1){
        printf("\n--> Underflow, no element to delete.\n");
    }
    else{
        printf("\n--> %d deleted from the stack.\n",stack[top]);
        top--;

    }
}

void Peek(){
    if(top == -1){
        printf("\n--> Stack is empty.\n");
    }
    else{
        printf("\n--> Top element is: %d\n", stack[top]);
    }
}

void Show(){
    if(top == -1){
        printf("\n--> Stack is empty.\n");
    }
    else{
        printf("\n--> Stack elements are: \n");
        for(int i=top; i>=0; i--){
            printf("%d\n",stack[i]);
        }
    }
}

void isFull(){
    if(top == n-1){
        printf("\n--> The stack is Full.\n");
    }
    else{
        printf("\n--> The stack is not Full.\n");
    }
}

void isEmpty(){
    if(top == -1){
        printf("\n--> The stack is Empty.\n");
    }
    else{
        printf("\n--> The stack is not Empty.\n");
    }
}