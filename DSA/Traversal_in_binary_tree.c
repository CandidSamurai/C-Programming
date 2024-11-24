#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

//-----IN-ORDER traversal-----
void InOrder(struct node* root){
    if(root != NULL){
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}

//-----PRE-ORDER traversal-----
void PreOrder(struct node* root){
    if(root != NULL){
        printf("%d ",root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

//-----POST-ORDER traversal-----
void PostOrder(struct node* root){
    if(root != NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ",root->data);
    }
}


int main(){
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  
    
    printf("In-order traversal: ");
    InOrder(p);
    printf("\nPre-order traversal: ");
    PreOrder(p);
    printf("\nPost-order traversal: ");
    PostOrder(p);

    // In-order traversal: 1 3 4 5 6 
    // Pre-order traversal: 5 3 1 4 6 
    // Post-order traversal: 1 4 3 6 5 

    return 0;
}