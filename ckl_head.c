#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;          
    struct node *link;  
};
void display(struct node*,struct node*);
struct node*insert_f(int,struct node*,struct node*);

struct node* insert_r(int ,struct node*,struct node*);
struct node* insert_at_p(int ,struct node*,struct node*,struct node*);



void main()
{    

struct node *head,*first,*second,*last,*dupl;
first = (struct node*)malloc(sizeof(struct node));
head = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
last = (struct node*)malloc(sizeof(struct node));

head->data=NULL;
head->link=first;

first->data=1;
first->link=second;

second->data=2;
second->link=last;

last->data=3;
last->link=head;
//printf("%d %p %p\n",first->data,first->link,first);
display(head,last);
first=insert_f(25,head,last);
printf("\n");
first=insert_r(15,head,last);
printf("\n");
display(head,last);
first=insert_at_p(22,second,head,last);
printf("\n");

display(head,last);

//dupl=copylist(first);
//display(dupl);
}
void display(struct node*head,struct node* last)
{
struct node *save;

save=head;
do
	{
	printf("%d",save->data);
	save=save->link;
	}while(save!=head);
}
struct node* insert_f(int x,struct node* head,struct node* last)
{
struct node* new;
new=(struct node*)malloc(sizeof(struct node));
if(new==NULL)
{
printf("overflow\n");
return head;
}
else
{
new->data=x;
new->link=head->link;
head->link=new;

return head;
}
}
struct node* insert_r(int x,struct node* head,struct node* last)
{
struct node* new;
new=(struct node*)malloc(sizeof(struct node));
if(new==NULL)
{
printf("overflow\n");
return head;
}
else
{
new->data=x;
new->link=head;
last->link=new;
last=new;

return head;
}
}
struct node* insert_at_p(int x,struct node* p,struct node* head,struct node* last)
{
struct node* new;
new=(struct node*)malloc(sizeof(struct node));
if(new==NULL)
{
printf("overflow\n");
return head;
}
else
{
new->data=x;
new->link=p->link;
p->link=new;
if(p=last)
{last=new;}

return head;
}
}


