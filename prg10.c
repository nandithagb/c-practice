#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int create(int);
void linearprobe();
void display();
void main(){
  int a[MAX],add,key,i;
  int ans=1;
  for(i=0;i<MAX;i++){
    a[i]=-1;
  }
  do{
    printf("enter the data:");
    scanf("%4d",&key);
    add=create(key);
    linearprobe(a,add,key);
    printf("'0'to break '1'to continue");
    scanf("%d",&ans);
  }while(ans);
  display(a);
}
int create(int key)
{
  int add;
  add=key%10;
  return add;
}
void linearprobe(int a[MAX],int add,int key)
{
  int flag=0,i,count=0;
  if(a[add]==-1){
    a[add]=key;
  } 
  else
  {
    printf("\n collision detected!");
    i=0;
    while(i<MAX)
      count++;
      i++;
    }
  printf("collision avoided sucsessfully");
  if(count==MAX)
  {
    printf("Hash table is full");
    display(a);
    exit(1);
  }
  for(add+1;i<MAX;i++)
    {
      if(a[i]==-1)
      {
        a[i]=key;
        flag=1;
        break;
      }
      
    }
  i=0;
  while((i<add)&&(flag=0)){
    if(a[i]==-1)
    {
      a[i]=key;
      flag=1;
      break;
    }i++;
  }
  }
void display(int a[MAX])
{
  int i,choice;
  printf("1.display all\n2.display filtered list");
  printf("enter the choice:");
  scanf("%d",&choice);
  if(choice==1){
    for(i=0;i<=MAX;i++){
      printf("%d->%d\n",i,a[i]);
    }
  }
  else
    for(i=0;i<=MAX;i++)
      if(a[i]!=-1)
      {
      printf("%d->%d\n",i,a[i]);
      continue;
    }
}