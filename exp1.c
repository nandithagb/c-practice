#include<stdio.h>
#include<stdlib.h>
int n,a[10],i;
void create()
{
  printf("enter the number of elements");
  scanf("%d",&n);
  printf("the elements are");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
void display()
{
  printf("the elements are");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
}
void main()
{
  int ch;
  do{
    printf("enter the choice");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      create();
      break;
      case 2:
      display();
      break;
      case 3:
      exit(0);
      break;
      default:
      printf("invalid opreator");
      break;
    }
  }
  while(ch<=3);
}