#include <stdio.h>
int n = 2;
int k = 0;
int front = -1;
int rear = -1;
int rear1;
int isfull()
{
 if((front==0)&&(rear==4)){
 return 1;
 }
 return 0;
}
int isempty()
{ if(front==-1){return 1;}
 
return 0;}
int enqueue(int x,int arr[]){
 if(rear<=n){
 rear++;}
 else{
 printf("Queue overflowed\n");
 return 0;
 }
 arr[rear]=x;
 if(rear==0)
 front++;
 if(rear==n){
 printf("Queue filled\n");
 }
 
}
int dequeue(int arr[]){
 front++;
 if(rear<front-1){
 printf("Error");
 return 0;
 }
 else{
 return arr[front-1];
 }
}
void push(int x, int arr[])
{
 if (front == -1)
 {
 front = 0;
 rear = 0;
 }
 else
 {
 front = front - 1;
 }
 arr[front] = x;
}
int eject(int arr[])
{
 int ele;
 ele = arr[rear];
 arr[rear] = 0;
 if (front == rear)
 {
 front = -1;
 rear = -1;
}
 else
 {
 rear = rear - 1;
 }
 return ele;
}
int main ()
{
 int i, arr[n+1], x, y, r;
 push(8, arr);
 printf ("1st entry done\n");
 k = k + 1;
 printf ("%d%d\n", front, rear);
 
 enqueue(82,arr);
 k+1;
 printf("2nd entry done\n");
 printf ("%d%d\n", front, rear);
 enqueue (5, arr);
 printf ("3nd entry done\n");
 printf ("%d%d\n", front, rear);
 r = eject (arr);
 printf ("1st deletion done %d\n", r);
 printf ("%d%d\n", front, rear);
 k=k-1;

r = dequeue(arr);
 printf ("second2 deletion done %d\n", r);
 arr[front-1]=0;
 k=k-1;
 printf ("%d%d\n", front, rear);
 for (i = 0; i < 3; i++)
{
printf ("%d\n", arr[i]);
}
 return 0;
}
