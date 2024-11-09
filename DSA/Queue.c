#include <stdio.h>

int queue[100], n, choice=0, front=-1, rear=-1;

void Enqueue();
void Dequeue();
void Front(); //peek
void Rear();
void isFull();
void isEmpty();
void Show();

int main(){
    printf("Enter the number of Elements in the queue: ");
    scanf("%d",&n);
    printf("\n******** Queue Operations ********\n");
    printf("----------------------------------\n");
    while(choice!=7){
        printf("\nChoose from the below options:\n");
        printf(" 1.enqueue \n 2.dequeue \n 3.show \n 4.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                Enqueue();
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Show();
                break;
            case 4:
                printf("\n--> Exiting....\n");
                break;
            default:
                printf("\n--> Enter a valid choice. \n");
        }
    }
    return 0;
}

void Enqueue(){
    if(rear == n-1){
        printf("\n--> Overflow, can't push more elements.\n");
    }
    else{
        int val;
        printf("\n--> Enter the element to push: ");
        scanf("%d", &val);

        if (front == -1 && rear == -1) { 
            front = 0;
        }
        rear++;
        queue[rear] = val;
    }
}

void Dequeue(){
    if(rear == -1 && front == -1){
        printf("\n--> Underflow, can't delete an element.");
    }
    else if(front == rear){
        printf("\n--> Deleted element: %d",queue[front]);
        front = rear = -1;
    }
    else{
        printf("\n--> Deleted element: %d",queue[front]);
        front++;
    }
}

void Show(){
    if(front == -1 && rear==-1){
        printf("\n--> Queue is empty.\n");
    }
    else{
        printf("Queue elements are:\n");
        for(int i=front; i<=rear; i++){
            printf("%d  ",queue[i]);
        }
    }
}