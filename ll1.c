#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;          
    struct node *link;  
};
void display(struct node*);
struct node*insert(int,struct node*);
struct node*insert_end(int,struct node*);
struct node* insord(int ,struct node*);
struct node* delete(int ,struct node*);
struct node* count(struct node*);
struct node* copylist(struct node*);
void main()
{    

struct node *first,*second,*third,*dupl;
first = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));


first->data=1;
first->link=second;

second->data=2;
second->link=third;

third->data=3;
third->link=NULL;
//printf("%d %p %p\n",first->data,first->link,first);
display(first);
first=insert(25,first);
display(first);
first=insert_end(30,first);
printf("after insertion\n");
display(first);
printf("after  insertion in between\n");
first=insord(15,first);
display(first);
printf("after deletion\n");
first=delete(3,first);
display(first);
count(first);
//dupl=copylist(first);
//display(dupl);
}
void display(struct node*first)
{
struct node *save;

save=first;
do
	{
	printf("%d",save->data);
	save=save->link;
	}while(save!=NULL);
}
struct node* insert(int x,struct node* first)
{
struct node* new;
new=(struct node*)malloc(sizeof(struct node));
if(new==NULL)
{
printf("overflow\n");
return first;
}
else
{
new->data=x;
new->link=first;
return new;
}
}
struct node* insert_end(int y,struct node* first)
{
struct node* new1;
struct node* temp;
new1=(struct node*)malloc(sizeof(struct node));
temp=first;
if(new1==NULL)
{
printf("overflow\n");
return first;
}
else
{
new1->data=y;
new1->link=NULL;


while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=new1;

return first;
}
}



struct node* insord(int y,struct node* first)
{
struct node* new1;
struct node* temp;
new1=(struct node*)malloc(sizeof(struct node));
temp=first;
if(new1==NULL)
{
printf("overflow\n");
return first;
}
else
{
new1->data=y;
if(first==NULL)
{
new1->link=NULL;
return new1;}
if(new1->data<=first->data)
{
new1->link=first;
return new1;}
temp=first;

while(temp->link!=NULL && new1->data>=temp->link->data)
{
temp=temp->link;
}
new1->link=temp->link;
temp->link=new1;

return first;
}
}
struct node* count(struct node* first)
{
struct node* save;
int count=0;
save=first;
while(save!=NULL)
{
count+=1;
save=save->link;
}
printf("no of nodes are %d\n",count);
}


struct node* delete(int y,struct node* first)
{
//struct node* new1;
struct node* save;
save=first;
//struct node* pred;
//pred=(struct node*)malloc(sizeof(struct node));
//save=first;
if(first==NULL)
{
printf("overflow\n");
return first;

}
if(save->data==y)
{
return save->link;
}

while(save->link!=NULL)
{
if(save->link->data==y)
{
save->link=save->link->link;
return first;
}
save=save->link;
}
printf("node not found");
return first;
}




struct node* copylist(struct node* first)
{
struct node* new1;
new1=(struct node*)malloc(sizeof(struct node));
if(first==NULL)
{
return NULL;}
else
{
new1->data=first->data;
new1->link=copylist(first->link);
return new1;
}
}



