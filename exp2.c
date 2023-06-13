#include<stdio.h>
#include<stdlib.h>
void create();
void insert();
void delete();
void display();
int i,a[10],n,ch,x,pos;
int main()
{
  while(1)
  {
    printf("*****user manu*****");
    printf("\n\t\t1.CREATE\t\t\n");
    printf("\n\t\t2.INSERT\t\t\n");
    printf("\n\t\t3.DELETE\t\t\n");
    printf("\n\t\t4.DISPLAY\t\t\n");
    printf("\n\t\t5.EXIT\t\t\n");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      create();
      break;
      case 2:
      insert();
      break;
      case 3:
      delete();
      break;
      case 4:
      display();
      break;
      case 5:
      exit(0);
      break;
      default:
      printf("invalid choice");

    }
    return(0);
  }
}
void create()
{
  printf("enter the number of elements");
  scanf("%d",&n);
  printf("the elements are:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
void insert()
{
  printf("enter the element to be inserted ");
  scanf("%d",&x);
  printf("enter the position to be inserted ");
  scanf("%d",&pos);
  if(pos<0&&pos>n+1)
  {
    printf("invalid position");
  }
  else
  {
    for(i=n-1;i>=pos;i--)
    {
      a[i]=a[i-1];
      a[pos-1]=x;
      n++;
    }
  }
}
void delete()
{
  printf("enter the position of the value to be deleted");
  scanf("%d",&pos);
  if(pos>=n+1)
  {
    printf("invalid position");
  }
  else
  {
    printf("the deleted element is %d",a[pos]);
    for(i=pos;i<n-1;i++)
    {
      a[i]=a[i+1];
      n--;
    }
  }
}
void display()
{
  printf("the array elements are");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
}