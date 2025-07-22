/*#include<stdio.h>
#include<stdlib.h>

struct tree{
	int data;
	struct tree*left;
	struct tree*right;
};

struct tree*addtree(struct tree*root,struct tree*new)
{
	struct tree*temp;
	temp=root;
	if(root==NULL)
	root =new;
	else
	{
		while(temp!=NULL)
		{
			if(new->data<temp->data)
			{
				if(temp->left==NULL)
				{
					temp->left=new;
					break;
				}
				else
				
					temp=temp->left;
				}
				else if(new->data>temp->data)
				{
					if(temp->right==NULL)
					{
						temp->right=new;
						break;
					}
					else
					
						temp=temp->right;
				}
					else
					
					printf("\n Dulpicate values are not allowed");
					}
				}
				return 0;
			}
			
struct tree*create(struct tree*root)
{
	char ch='y';
	struct tree*new;
	while(ch=='y'||ch=='Y')
  {
  	new=(struct tree*)malloc(sizeof(struct tree));
  	printf("Enter the data");
  	scanf("%d",&new->data);
  	new->left=NULL;
  	new->right=NULL;
  	root=addtree(root,new);
  	printf("\nDo you want to contine?");
  	scanf(" %c",&ch);
  }
return 0;
}


inorder(struct tree*temp)
{
	if(temp!=NULL)
	{
		inorder(temp->left);
		printf("%d ",temp->data);
		inorder(temp->right);
	}
}

preorder(struct tree*temp)
{
	if(temp!=NULL)
	{
		printf("%d ",temp->data);
		preorder(temp->left);
		preorder(temp->right);
	}
}

postorder(struct tree* temp)
{
	if(temp!=NULL)
	{
		postorder(temp->left);
		postorder(temp->right);
		printf("%d ",temp->data);
	}
}

int main()
{
	struct tree*root=NULL;
	root=create(root);
	printf("\nInorder traversal is\n");
	inorder(root);
	printf("\nPreorder traversal is\n");
	preorder(root);
	printf("\nPostorder traversal is\n");
	postorder(root);
	return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

struct tree {
    int data;
    struct tree* left;
    struct tree* right;
};

struct tree* addtree(struct tree* root, struct tree* newNode) {
    struct tree* temp = root;

    if (root == NULL) {
        root = newNode;
    } else {
        while (temp != NULL) {
            if (newNode->data < temp->data) {
                if (temp->left == NULL) {
                    temp->left = newNode;
                    break;
                } else {
                    temp = temp->left;
                }
            } else if (newNode->data > temp->data) {
                if (temp->right == NULL) {
                    temp->right = newNode;
                    break;
                } else {
                    temp = temp->right;
                }
            } else {
                printf("\nDuplicate values are not allowed");
                break;
            }
        }
    }
    return root;
}

struct tree* create(struct tree* root) {
    char ch = 'y';
    struct tree* newNode;

    while (ch == 'y' || ch == 'Y') {
        newNode = (struct tree*)malloc(sizeof(struct tree));
        printf("Enter the data: ");
        scanf("%d", &newNode->data);
        newNode->left = NULL;
        newNode->right = NULL;
        root = addtree(root, newNode);
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &ch);
    }
    return root;
}

void inorder(struct tree* temp) {
    if (temp != NULL) {
        inorder(temp->left);
        printf("%d ", temp->data);
        inorder(temp->right);
    }
}

void preorder(struct tree* temp) {
    if (temp != NULL) {
        printf("%d ", temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}

void postorder(struct tree* temp) {
    if (temp != NULL) {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d ", temp->data);
    }
}

int main() {
    struct tree* root = NULL;
    root = create(root);

    printf("\nInorder traversal is:\n");
    inorder(root);

    printf("\nPreorder traversal is:\n");
    preorder(root);

    printf("\nPostorder traversal is:\n");
    postorder(root);

    return 0;
}

		
	

