#include <stdio.h>
#include <stdlib.h>
void inorder();
void preorder();
void postorder();
struct node{
int data;
struct node *left;
struct node *right;
};
typedef struct node TREE;
TREE*root=NULL;
TREE*create_bst();
void search();
int main(){
  int ch,n,i;
  while(1){
    printf("**************USER MENU************\n");
    printf("1.CREATE\n");
    printf("2.INORDER\n");
    printf("3.PREORDER\n");
    printf("4.POSTORDER\n");
    printf("5.SEARCH\n");
    printf("6.EXIT\n");
    printf("enter the choice:");
    scanf("%d",&ch);
    switch(ch){
      case 1:{
              printf("enter no of elements:");
              scanf("%d",&n);
              for(i=0;i<n;i++){
                root=create_bst(root);
              }
              }
              break;
      case 2:printf("INORDER:\n");
              inorder(root);
              break;
      case 3:printf("PREORDER:\n");
            preorder(root);
            break;
      case 4:printf("POSTORDER:\n");
              postorder(root);
              break;
      case 5:search();
              break;
      case 6:exit(0);
              break;
      default:printf("invalid!");
      
      
    }
  }
  return 0;
}
TREE*create_bst(TREE*root)
{
  TREE *new,*temp,*prev;
  new=(TREE*)malloc(sizeof(TREE));
  printf("enter the data");
  scanf("%d",&new->data);
  new->left=NULL;
  new->right=NULL;
  if(root==NULL){
    root=new;
    return root;
  }
  else{
  temp=root;
  prev=NULL;
  while(temp!=NULL){
    prev=temp;
    if(new->data < temp->data)
      temp=temp->left;
    else
      temp=temp->right;
  }

  if(new->data < prev->data)
    prev->left=new;
  else
    prev->right=new;
  
  return root;}
}
void search(){ 
  TREE*temp;
  int key,flag=0;
  printf("enter the key:");
  scanf("%d",&key);
  if(root==NULL){
    printf("tree empty");
      return;
  }
  temp=root;
  while(temp!=NULL)
  {
    if(key==temp->data)
    {
      flag=1;
      break;
      }
    else if(key<temp->data)
      temp=temp->left;
    else
      temp=temp->right;
  }
if(flag==1)
{
  printf("key found!");
  
}
  else{
    printf("key not found");
  }
  
}


void inorder(TREE *root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
  }
}
void preorder(TREE *root)
{
  if(root!=NULL)
  {
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
  }
}
void postorder(TREE *root)
{
  if(root!=NULL)
  {
    
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
  }
}