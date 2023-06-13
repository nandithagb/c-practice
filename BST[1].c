#include<stdio.h>
#include<stdlib.h>
struct tree
{
int data;
struct tree *left, *right;
};
typedef struct tree TREE;

/*Function definition to create a BST of N integers.*/
TREE* create_bst ( TREE *root )
{
TREE *NEW, *prev, *cur;
NEW = ( TREE* ) malloc ( sizeof ( TREE ) );
printf ( "\nEnter the data to be inserted: " );
scanf ( "%d", &NEW -> data );
NEW -> left = NULL;
NEW -> right = NULL;
if ( root == NULL )
{
root = NEW ;
return ( root );
}
prev = NULL;
cur = root;
while ( cur != NULL )
{
prev = cur;
if ( NEW->data < cur-> data )
cur = cur->left; /*Traverse towards left sub-tree.*/
else
cur = cur->right; /*Traverse towards right sub-tree.*/
}
if ( NEW->data < prev->data )
prev->left = NEW ; /*Attach node onto the left of previous node.*/
else
prev->right = NEW ; /*Attach node onto the right of previous node.*/
return ( root );
}
/*Function definition for Inorder Traversal of BST.*/
void inorder_traversal ( TREE *root )
{
if ( root == NULL )
return;
inorder_traversal ( root->left );
printf ( "%d ", root->data );
inorder_traversal ( root->right );
}
/*Function definition for Preorder Traversal of BST.*/
void preorder_traversal ( TREE *root )
{
if ( root == NULL )
return;
printf ( "%d ", root->data );
preorder_traversal ( root->left );
preorder_traversal ( root->right );
}
/*Function definition for Post order Traversal of BST.*/
void postorder_traversal ( TREE *root )
{
if ( root == NULL )
return;
postorder_traversal ( root->left );
postorder_traversal ( root->right );
printf ( "%d ", root->data );
}
/*Function definition to search for a key in BST.*/
void search_bst ( TREE *root )
{
	int key, flag = 0;
	TREE *temp;
	printf ( "\nEnter the key to be searched: " );
	scanf ( "%d", &key );
	if ( root == NULL )
		return;
	temp = root;
	while ( temp != NULL )
	{
		if ( key == temp->data )
		{
			flag = 1; /*Key found.*/
			break;
		}
		else if ( key < temp->data )
			temp = temp->left; /*Search towards left of the sub-tree.*/
		else
			temp = temp->right; /*Search towards right of the sub-tree.*/
	}
	if ( flag == 1 )
		printf ( "\nKey found!!!" );
	else
		printf ( "\nKey not found!!!" );
}
int main()
{
	int ch, n, i;
	TREE *root = NULL;
	for ( ; ; )
	{
		printf ( "\n---------------------------------------------" );
		printf ( "\nBINARY SEARCH TREE OPERATIONS" );
		printf ( "\n1: Create N Integers \n2: Inorder Traversal \n3: Pre-order Traversal \n4: Post ordertraversal \n5: Search for a KEY \n6: Exit" );
		printf ( "\n---------------------------------------------" );
		printf ( "\nEnter your choice: " );
		scanf ( "%d", &ch );
		switch ( ch )
		{
			case 1: printf ( "\nEnter the number of integers: " );
				scanf ( "%d", &n );
				for ( i = 0 ; i < n ; i++ )
				{
					root = create_bst ( root );
				}
				break;
			case 2: printf ( "\nThe Inorder Traversal of the given BST is: " );
				inorder_traversal ( root );
				break;
			case 3: printf ( "\nThe Pre-order Traversal of the given BST is: " );
				preorder_traversal ( root );
				break;
			case 4: printf ( "\nThe Post order Traversal of the given BST is: " );
				postorder_traversal ( root );
				break;
			case 5: search_bst ( root );
				break;
			case 6: exit(0);
			default: printf ( "\nInvalid Choice!!!" );
      
		}

	}	
  return 0;
}