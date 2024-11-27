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
struct node* insert(struct node* root, int data){
    if(root == NULL){
        return createNode(data);
    }

    if(data == root->data){
        printf("Can't insert, %d already exists in the tree.",data);
        return root;
    }
    else if(data < root->data){
        root->left = insert(root->left,data);
    }
    else{
        root->right = insert(root->right,data);
    }
    return root;
}


// Display
void inOrder(struct node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}


// Deleting a node
struct node* inOrderPredecessor(struct node* root) {
    root = root->left;
    while (root->right != NULL) {
        root = root->right;
    }
    return root;
}

struct node* delete(struct node* root, int value) {
    struct node* iPre;
    if (root == NULL) {
        return NULL;
    }

    if (value < root->data) {
        root->left = delete(root->left, value);
    }
    else if (value > root->data) {
        root->right = delete(root->right, value);
    }
    else {
        // Node to be deleted found

        // Case 1: Node has no children (leaf node)
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;  // Return NULL to disconnect the node from its parent
        }

        // Case 2: Node has only one child
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }

        // Case 3: Node has two children
        // Find the in-order predecessor (the largest node in the left subtree)
        iPre = inOrderPredecessor(root);   
        root->data = iPre->data;    // Replace root's data with the in-order predecessor's data
        root->left = delete(root->left, iPre->data);  // Delete the in-order predecessor
    }
    return root;
}


int main(){
    struct node* root = NULL;
    int choice, value;

    while(choice!=4){
        printf("\nBinary Search Tree Operations:\n");
        printf(" 1.Insert\n 2.Delete\n 3.Display(Inorder Traversal)\n 4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d",&value);
                root = insert(root, value);
                break;
            case 2:
                printf("Enter the value to delete: ");
                scanf("%d",&value);
                root = delete(root,value);
                break;
            case 3:
                printf("\nInOrder traversal: ");
                inOrder(root);
                break;
            case 4:
                printf("\nExiting the program....");
                break;
            default:
                printf("\nInvalid choice.\n");
        }
    }
    return 0;
}