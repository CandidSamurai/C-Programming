#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createnode(int data){
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

//inserting an element
struct node* insert(struct node* root, int value){
    if(root == NULL){
        return createnode(value);
    }

    if(value == root->data){
        printf("can't insert");
        return root;
    }
    else if(value > root->data){
        root->right = insert(root->right,value);
    }
    else{
        root->left = insert(root->left,value);
    }
    return root;
}

// deleting an element
struct node* inorderpredecessor(struct node* root){
    root = root->left;
    while(root->right != NULL){
        root = root->right;
    }
    return root;
}

struct node* delete(struct node* root, int value){
    struct node* inpre;
    if(root == NULL){
        return NULL;
    }

    if(value > root->data){
        root->right = delete(root->right, value);
    }
    else if(value < root->data){
        root->left = delete(root->left, value);
    }
    else{
        //node is leaf node
        if(root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        }

        // node has one child
        if(root->left == NULL){
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            struct node* temp = root->left;
            free(root);
            return temp;
        }

        //node has two children
        inpre = inorderpredecessor(root);
        root->data = inpre->data;
        root->left = delete(root->left, inpre->data);
    }
}


//dispalying an element
void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}


//searching

struct node* search(struct node* root, int val){
    while(root!=NULL){
        if(val == root->data){
            return root;
        }
        else if(val > root->data){
            root = root->right;
        }
        else{
            root = root->left;
        }
    }
    return NULL;
}