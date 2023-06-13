# include<stdio.h>
# include<stdlib.h>
void insert_end();
void del_front();
struct node{
int ID;
char name[30],branch[30],spec[30];
struct node *rlink;
struct node *llink;
};
typedef struct node NODE;
NODE *first=NULL;
void insert_end()
{
  NODE *new;
  new=(NODE*)malloc(sizeof(NODE));
  printf("enter the ID:\n");
  scanf("%d",&new->ID);
  printf("enter the name:\n");
  scanf("%s",new->name);
  printf("enter the branch:\n");
  scanf("%s",new->branch);
  printf("neter the specilization");
  scanf("%s",new->spec);
  new->llink=NULL;
  new->rlink=NULL;
  NODE *temp;
  if(first==NULL){
    first=new;
    return;
  }
  else{
  first=temp;
  while(temp->rlink!=NULL)
  {
    temp=temp->rlink;
  }
  temp->rlink=new;
  new->llink=temp;
}
}
void del_front(){
  NODE*temp;
  if(first==NULL){
    printf(" queue empty\n");
    return;
  }
  temp=first;
  printf("deleted element:%d%s%s%s\n",first->ID,first->name,first->branch,first->spec);
  first=first->rlink;
  free(temp);
}
void display()
{
  NODE*temp;int count=0;
  if(first==NULL){
    printf("queue empty\n");
    return;
  }
  temp=first;
  while(temp!=NULL){
    printf("%d%s%s%s\n",first->ID,first->name,first->branch,first->spec);
    temp=temp->rlink;
    count++;
    printf("no.of nodes:%d",count);
  }
}
int main()
{
  int ch;
  while(1)
  {
    printf("************USER MENU****************\n");
    printf("1.INSERT\n");
    printf("2.DELETE\n");
    printf("3.DISPLAY\n");
    printf("4.EXIT\n");
    printf("enter the choice:");
    scanf("%d",&ch);
    switch(ch){
      case 1:insert_end();
              break;
      case 2:del_front();
              break;
      case 3:display();
              break;
      case 4:exit(0);
              break;
      default:printf("invalid input!");
    }
  }
  return 0;
}