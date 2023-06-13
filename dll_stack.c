#include <stdio.h>
#include <stdlib.h>
struct node
{
 int ID;
 char Name[10];
 char Branch[5];
 char areaofspeci[100];
 struct node* next;
 struct node* prev;
} *top;
void push()
{
struct node* temp = (struct node*)malloc(sizeof(struct node));
if (!temp)
{
 printf("We cannot allocate memory");
 return;
}
printf("Enter the details of the professor that you want to push\n");

printf("Enter the ID\n");
 scanf("%d",&temp->ID);
 printf("Enter the name\n");
 scanf("%s",temp->Name);
 printf("Enter the Branch\n");
 scanf("%s",&temp->Branch);
 printf("Enter the area of specialization\n");
 scanf("%s",&temp->areaofspeci);
if (top == NULL)
{
 temp->next = NULL;
 temp->prev = NULL;
 top = temp;
}
else
{
 top->next = temp;
 temp->prev = top;
 top = temp;
}
}
void pop()
{
 if (top == NULL)
 {
 printf("stack is empty. We have nothing to pop\n");
 return 0;
 }

if(top->next == NULL && top->prev ==NULL)
 {
 struct node *temp;
 temp = top;
 printf("The deleted element is %s\n",temp->Name);
 top= NULL;
 free(temp);
 }
 struct node *temp;
temp = top;
top = top->prev;
top->next = NULL;
printf("The deleted element is: %s\n",temp->Name);
free(temp);
}
void display()
{
 struct node *temp = top;
 if (temp==NULL)
 {
 printf("Stack is empty\n");
 return;
 }
 while(temp!= NULL)
 {
 printf("%s",temp->Name);
 printf("<--%s,%d,%s",temp->Branch,temp->ID,temp->areaofspeci);
 printf("-->\n");
 temp = temp->prev;

}
 printf("\n");
}
int main()
{
    int choose_number;
    while(1)
    {
        printf("1. push element\n");
        printf("2. pop element\n");
        printf("3. Display elements\n");
        printf("4. Exit\n");
        printf("choose a number\n");
        scanf("%d", &choose_number);
        switch (choose_number)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4:
            exit(0);
            default: printf("invalid choice\n");
        }
    }
    return 0;
}