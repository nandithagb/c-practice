#include <stdio.h>
#include <stdlib.h>
/* A binary tree node has data, pointer to left child and a pointer to right child
*/
struct Node
{
int data;
struct Node *left;
struct Node *right;
};
typedef struct Node NODE;

// Function to insert nodes in level order
NODE* insertLevelOrder(int arr[],int i, int n)
{
	NODE *root = NULL;

	if (i < n)
	{
		NODE *new;
        new = (NODE *)malloc(sizeof(NODE));
		new->data = arr[i];
		new->left = new->right = NULL;
		root = new;
		// insert left child
		root->left = insertLevelOrder(arr,2 * i + 1, n);
		// insert right child
		root->right = insertLevelOrder(arr,2 * i + 2, n);
	}
	return root;
}
// Function to print tree nodes in InOrder fashion
void inOrder(NODE* root)
{
    
	if (root != NULL)
	{
		inOrder(root->left);
		printf("%d ",root->data);
		inOrder(root->right);
	}
}
void postOrder(NODE* root)
{
    
	if (root != NULL)
	{
		postOrder(root->left);
        postOrder(root->right);
		printf("%d ",root->data);
	}
}
void preOrder(NODE* root)
{
    
	if (root != NULL)
	{
		printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
	}
}

// Driver program to test above function
void main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int n = sizeof(arr)/sizeof(arr[0]);
	NODE* root = insertLevelOrder(arr, 0, n);
	printf("Inorder:-\n");
    inOrder(root);
    printf("\nPostorder:-\n");
    postOrder(root);
    printf("\nPreorder\n");
    preOrder(root);
    printf("\n");
}