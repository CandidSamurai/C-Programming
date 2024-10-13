#include <stdio.h>

int queue[100], n, choice=0, front=-1, rear=-1;

void Enqueue();
void Dequeue();
void Front(); //peek
void Rear();
void isFull();
void isEmpty();

int main(){

    return 0;
}

void Enqueue(){
    if(rear == n-1){
        printf("\n--> Overflow, can't push more elements.\n");
    }
    else if(rear == -1 && front == -1){
        rear++;
        front++;
        int val;
        printf("\n--> Enter the element to push: ");
        scanf("%d",&val);
        queue[rear]=val;
    }
    else{
        rear++;
        int val;
        printf("\n--> Enter the element to push: ");
        scanf("%d",&val);
        queue[rear]=val;
    }
}