#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;          
    struct node *link;  
};
void display(struct node*,struct node*);
struct node*insert_first(int,struct node*,struct node*);
struct node*insert_end(int,struct node*,struct node*);
struct node* insord(int ,struct node*,struct node*);
void delete(int ,struct node*,struct node*);

void main()
{    

struct node *first,*second,*last,*dupl;
first = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
last = (struct node*)malloc(sizeof(struct node));


first->data=1;
first->link=second;

second->data=2;
second->link=last;

last->data=3;
last->link=first;
//printf("%d\n",last->data);
printf("\n");
display(first,last);
first=insert_first(25,first,last);
printf("\n");
display(first,last);

first=insert_end(30,first,last);
printf("after insertion\n");
display(first,last);
printf("after  insertion in between\n");
first=insord(15,first,last);
display(first,last);
printf("after deletion\n");
delete(1,first,last);
display(first,last);

//dupl=copylist(first);
//display(dupl);
}
void display(struct node*first,struct node* last)
{
struct node *save;

save=first;
do
	{
	printf("%d",save->data);
	save=save->link;
	}while(save!=first);
}
struct node* insert_first(int x,struct node* first,struct node* last)
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
if(first==NULL)
{

new->link=new;
first=last=NULL;
}
else
new->link=first;
last->link=new;
first=new;
return first;
}
}
struct node* insert_end(int y,struct node* first,struct node* last)
{
struct node* new1;
//struct node* temp;
new1=(struct node*)malloc(sizeof(struct node));
//temp=first;
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
new1->link=new1;
first=last=new1;

}
else
{
new1->link=first;
last->link=new1;
last=new1;
}
return first;
}
}



struct node* insord(int y,struct node* first,struct node* last)
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
new1->data=y;
if(first==NULL)
{
new1->link=new1;
first=last=new1;
return first;
}
else if(new1->data<=first->data)
{
new1->link=first;
last->link=new1;
first=new1;
return first;
}
temp=first;
while(temp!=last && new1->data>=temp->link->data)
{
temp=temp->link;
}
new1->link=temp->link;
temp->link=new1;
if(temp==last)
{
last=new1;
}
return first;
}

/*struct node* delete(int y,struct node* first,struct node* last)
{
//struct node* new1;
struct node* save;
save=first;
struct node* pred;
//pred=(struct node*)malloc(sizeof(struct node));
//save=first;
if(first==NULL)
{
printf("overflow\n");
return first;

}
while(save->data!=y && save!=last)
{
pred=save;
save=save->link;
}
if(save->data!=y)
{
printf("node not found");
return first;
}
if(y=first->data)
{
	first=first->link;
	last->link=first;
}
else
pred->link=save->link;
if(last->data==y)
	last=pred;
	
}*/


void delete(int key,struct node* first,struct node* last) Function to delete a given node from the list 
{  
    if (first == NULL)  
        return ;  
  
    // Find the required node  
   struct  node* curr, *prev; 
	curr=first; 
    while (curr->data != key)  
    {  
        if (curr == last)  
        {  
            printf( "Given node is not found");
            break;  
        }  
  
        prev = curr;  
        curr = curr -> link;  
    }  
  
    // Check if node is only node  
    if (curr->link == first)  
    {  
        first = NULL;  
        free(curr);  
        return;  
    }  
  
    // If more than one node, check if  
    // it is first node  
    if (curr == first)  
    {  
        prev = first;  
        while (prev -> link!= first)  
            prev = prev -> link;  
        first = curr->link;  
        prev->link = first;  
        free(curr);  
    }  
  
    // check if node is last node  
    else if (curr -> link == first)  
    {  
        prev->link = first;  
        free(curr);  
    }  
    else
    {  
        prev->link = curr->link;  
        free(curr);  
    }  
}  
  




