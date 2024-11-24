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

// Inserting a node
void insert(struct node* root, int key){
    struct node* prev = NULL;
    while(root != NULL){
        prev = root;
        if(key == root->data){
            printf("Can't insert, %d already exists",key);
            return;
        }
        else if(key < root->data){
            root = root -> left;
        }
        else{
            root = root -> right;
        }
    }
    struct node* new = createNode(key);
    if(prev == NULL){
        root = new;
    }
    else if(key < prev->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }
}

// Display



// Deleting a node


int main(){
    return 0;
}