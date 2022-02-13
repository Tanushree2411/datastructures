#include<stdio.h>
#define MAX 5
void main()
{
int cqueue_arr[MAX];
int front = -1;
int rear = -1;
while(1)
{
	printf("enter the num 0,1 for enque and deque");
	scanf("%d",&num);
switch(num)
	{
	case 0:
		while(1)
		{
			printf("enter element to be pushed");
			scanf("%d",&x);
			insert(item);
				//break;

			
		}
				//break;

			

	break;

	case 1:

	del();
	break;
	case 2:
	exit(0);
	break;
	}
}
}

void insert(int item)
{
if((front == 0 && rear == MAX-1) || (front == rear+1))
{
printf("Queue Overflow \n");
return;
}
if (front == -1)  
{
front = 0;
rear = 0;
}
else
{
if(rear == MAX-1)	
rear = 0;
else
rear = rear+1;
}
cqueue_arr[rear] = item ;
}
void del()
{
if (front == -1)
{
printf("Queue Underflow\n");
return ;
}
printf("Element deleted from queue is : %d\n",cqueue_arr[front]);
if(front == rear) 
{
front = -1;
rear=-1;
}
else
{	
if(front == MAX-1)
front = 0;
else
front = front+1;
}
}
