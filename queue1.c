#include<stdio.h>
#define SIZE 5
int queue[SIZE], front = -1, rear = -1;


void enqueue(int item){
    if(rear == SIZE-1){
        printf("Can't enqueue as the queue is full\n");
    }
    else{
        
        if(front == -1){
            front = 0;
        }
        
        rear = rear + 1;
        queue[rear] = item;
        printf("We have enqueued %d\n",item);
   }
}

void dequeue(){
    if(front == -1){
        printf("Can't dequeue as the queue is empty\n");
    }
    else{
        printf("We have dequeued : %d\n", queue[front]);
        front = front + 1;
        
        
        if(front > rear){
	        front = -1;
	        rear = -1;
        }
   }
}


int main()
{
int num,x;
while(1)
{
printf("enter num");
scanf("%d",&num);
switch(num)
{
	case 0:
	scanf("%d",&x);
	enqueue(x);
	break;

	case 1:
	dequeue();
	break;
}
}
return 0;
}

