/*#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*left,*right;
	
};
struct node*create()
{
	int x;
	struct node*new;
	printf("\nEnter data or -1 to end the node");
	scanf("%d",&x);
	if(x==-1)
	return NULL;
	else
	{
		new=(struct node*)malloc(sizeof(struct node*));
		new->data=x;
		printf("Enter left child of %d:\n",x);
		new->left=create();
		printf("Enter right child of %d:\n",x);
		new->right=create();
		return new;
		
	}
}

void preorder(struct node*t)
{
	if(t!=NULL)
	{
		printf(" %d",t->data);
		preorder(t->left);
		preorder(t->right);
		
	}
}

void postorder(struct node*t)
{
	if(t!=NULL)
	{
		postorder(t->left);
		postorder(t->right);
			printf(" %d",t->data);
		
	}
}

void inorder(struct node*t)
{
	if(t!=NULL)
	{
		inorder(t->left);
		printf(" %d",t->data);
		inorder(t->right);
	}
}
int main()
{
	struct node*root,*copy;
	int n;
	root=create();
	printf("\n The preorder traversal of tree is: ");
	preorder(root);
	printf("\nThe postorder traversal of tree is");
	postorder(root);
	printf("\n The inorder traversal of tree is: ");
	inorder(root);
	return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left, *right;
};

struct node* create() {
    int x;
    struct node* newNode;
    printf("\nEnter data or -1 to end the node: ");
    scanf("%d", &x);
    if (x == -1)
        return NULL;
    else {
        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = x;
        printf("Enter left child of %d:\n", x);
        newNode->left = create();
        printf("Enter right child of %d:\n", x);
        newNode->right = create();
        return newNode;
    }
}

void preorder(struct node* t) {
    if (t != NULL) {
        printf(" %d", t->data);
        preorder(t->left);
        preorder(t->right);
    }
}

void postorder(struct node* t) {
    if (t != NULL) {
        postorder(t->left);
        postorder(t->right);
        printf(" %d", t->data);
    }
}

void inorder(struct node* t) {
    if (t != NULL) {
        inorder(t->left);
        printf(" %d", t->data);
        inorder(t->right);
    }
}

int main() {
    struct node* root;
    root = create();
    
    printf("\nThe preorder traversal of the tree is:");
    preorder(root);
    
    printf("\nThe postorder traversal of the tree is:");
    postorder(root);
    printf("\nThe inorder traversal of the tree is:");
    inorder(root);
    
    return 0;
}

