#include <stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*left;
  struct node*right;
};
typedef struct node TREE;
TREE*insertlo();
void inorder();
void preorder();
void postorder();
void main(){
  int a[]={1,2,3,4,5,6};
  int n=sizeof(a)/sizeof(a[0]);
  TREE*root=insertlo(a,0,n);
  printf("INORDER:\n");
  inorder(root);
  printf("\nPREORDER:\n");
  preorder(root);
  printf("\nPOSTORDER:\n");
  postorder(root);
  printf("\n");
  }
TREE*insertlo(int a[],int i,int n)
{
  TREE *root=NULL;
  if(i<n)
  {
    TREE*new=(TREE*)malloc(sizeof(TREE));
    new->data=a[i];
    new->left=new->right=NULL;
    root=new;
    root->left=insertlo(a,2*i+1,n);
    root->right=insertlo(a,2*i+2,n);
  }
  return root;
}
void inorder(TREE* root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
  }
}
void preorder(TREE*root)
{
  if(root!=NULL)
  {
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
  }
}
void postorder(TREE*root)
{
  if(root!=NULL)
  {
    
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
  }
}