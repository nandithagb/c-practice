# include<stdio.h>
# include<stdlib.h>
void insert_front();
void del_front();
struct node{
int ID;
char name[30],branch[30],spec[30];
struct node *rlink;
struct node *llink;
};
typedef struct node NODE;
NODE *first=NULL;
void insert_front()
{
  NODE *new;
  new=(NODE*)malloc(sizeof(NODE));
  printf("enter the ID:\n");
  scanf("%d",&new->ID);
  printf("enter the name:\n");
  scanf("%s",new->name);
  printf("enter the branch:\n");
  scanf("%s",new->branch);
  printf("eneter the specilization\n");
  scanf("%s",new->spec);
  new->llink=NULL;
  new->rlink=NULL;
  if(first==NULL){
    first=new;
    return;
  }
  new->rlink=first;
  first->llink=new;
  first=new;
  }
void del_front(){
  NODE*temp;
  if(first==NULL){
    printf(" queue empty\n");
    return;
  }
  temp=first;
  printf("deleted element:%d\t%s\t%s\t%s\n",first->ID,first->name,first->branch,first->spec);
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
    printf("%d\t%s\t%s\t%s\n",temp->ID,temp->name,temp->branch,temp->spec);
    temp=temp->rlink;
    count++;
    
  }
  printf("no.of nodes:%d\n",count);
}
int main()
{
  int ch;
  while(1)
  {
    printf("************USER MENU****************\n");
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.DISPLAY\n");
    printf("4.EXIT\n");
    printf("enter the choice:");
    scanf("%d",&ch);
    switch(ch){
      case 1:insert_front();
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