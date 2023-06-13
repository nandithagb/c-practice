#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
int ID;
char Name[10];
char Branch[5];
char areaofspeci[100];
struct node *prev;
struct node *next;
}node;
node *head;
node *tail;
// Removing element from the queue
void dequeue()
{
{
    node* temp;
    if(head==NULL)
    {
        printf("LIst empty");
        return;
    }
    temp=head;
    printf("%s is deleted\n",temp->Name);
    head=head->next;
    free(temp);
}
}
// Adding node to the queue
void enqueue()
{
node *temp = malloc(sizeof(node));
if (temp == NULL)
{
return;
}
printf("Enter the details of the professor that you want to enque\n");
printf("Enter the ID\n");
scanf("%d",&temp->ID);
printf("Enter the name\n");
scanf("%s",&temp->Name);
printf("Enter the Branch\n");
scanf("%s",&temp->Branch);
printf("Enter the area of specialization\n");
scanf("%s",&temp->areaofspeci);
temp->next = NULL;
temp->prev = NULL;
if (head == NULL && tail == NULL)
{
head = temp;
tail = temp;
}
else
{
tail->next = temp;
temp->prev=tail;
temp->next=NULL;
tail = temp;
}
}
void display()
{
for (node *tmp = head; tmp != NULL; tmp = tmp->next)
{
printf("%s", tmp->Name);
printf("<--");
printf("-->");
}
}
int main()
{
int choose_number;
while(1)
{
printf("\n 1. Enqeue element\n");
printf("2. Dequeue element\n");
printf("3. Display elements\n");
printf("4. Exit\n");
printf("choose a number\n");
scanf("%d", &choose_number);
switch (choose_number)
{
case 1: enqueue();
break;
case 2: dequeue();
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