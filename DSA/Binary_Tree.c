#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* CreateNode(int data){
    struct node* n;
    n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}


int main(){
    // Creating the root node and its immediate children
    struct node* p = CreateNode(2);
    struct node* p1 = CreateNode(1);
    struct node* p2 = CreateNode(4);
    
    // Link p1 and p2 as left and right children of p
    p->left = p1;
    p->right = p2;

    // Add children to p1
    p1->left = CreateNode(0);    // Left child of p1
    p1->right = CreateNode(1);  // Right child of p1

    // Add children to p2
    p2->left = CreateNode(3);   // Left child of p2
    p2->right = CreateNode(5);

    // Create a new node (p3) and add it to p2 as a left child
    //struct node* p3 = CreateNode(5);
    //p2->left = p3; 

    printf("Data in p: %d\n", p->data);
    printf("Data in p1: %d\n", p1->data);
    printf("Data in p2: %d\n", p2->data);

    return 0;
}