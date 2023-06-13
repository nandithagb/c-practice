#include<stdio.h>
#include<Stdlib.h>
#define MAX 5
int s[MAX-1],top;
void push(int elem)
{
if(top==MAX-1)
{
  printf("\n stack overflow");
}
else
{
  top=top+1;
  s[top]=elem;
}
}
int pop()
{
  int del,top;
  if(top==-1)
  {
    printf("\n stack underflow");
    return (-1);
  }
  else
  {
    del=s[top];
    top=top-1;
    return(del);
  }
}
void display()
{
  int i,top;
  if(top==-1)
  {
    printf("\n stack is empty");
  }
  else
  {
    printf("the elements of stack are");
    for(i=top;i>=0;i--)
    {
      printf("\t%d",s[i]);
    }
  }
}
int main()
{
  int ch,elem,del_elem,flag;
  for(;;)
  {
    printf("\n-------");
    printf("\n stack operations");
    printf("\n 1.PUSH\n2.POP\n3.DISPALY\n 4.EXIT");
    printf("\n----------");
    printf("\n enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      printf("\n enter the element to push into the stack");
      scanf("%d",&elem);
      push(elem);
      break;
      case 2:
      del_elem=pop();
      if(del_elem==-1)
      {
        printf("\n no element to delete\n");
      }
      else
      {
        printf("the deleted element is %d",del_elem);
        break;
      }
      case 3:
      display();
      break;
      case 4:
      return (0);
      default:
      printf("\n invalid choice");
    }
  }
}
