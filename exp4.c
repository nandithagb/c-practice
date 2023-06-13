#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *leftchild;
    struct node *rightchild;
};
struct node *createNode(int value)
{
    struct node *nptr;
    nptr = (struct node*)malloc(sizeof(struct node));
    nptr->data=value;
    nptr->leftchild=NULL;
    nptr->rightchild=NULL;
    return nptr;
}
struct node *insertleft(struct node *root,int value)
{
    root->leftchild=createNode(value);
    return (root->leftchild);
}
struct node *insertright(struct node *root,int value)
{
    root->rightchild=createNode(value);
    return (root->rightchild);
}
void inorder(struct node *root)
{
    if(root)
    inorder(root->leftchild);
    printf("%d\t",root->data);
    inorder(root->rightchild);
}
void preorder(struct node *root)
{
    if(root)
    {
        printf("%d\t",root->data);
        preorder(root->leftchild);
        preorder(root->rightchild);
    }
}
void postorder(struct node *root)
{
    if(root)
    {
        postorder(root->leftchild);
        postorder(root->rightchild);
        printf("%d\t",root->data);
    }
}
int main()
{
    struct node *root=createNode(10);
    insertleft(root,5);
    insertright(root,3);
    insertleft(root->leftchild,2);
    insertright(root->leftchild,6);
    insertleft(root->rightchild,7);
    insertright(root->rightchild,8);
    
    inorder(root);
    preorder(root);
    postorder(root);
    return 0;
}