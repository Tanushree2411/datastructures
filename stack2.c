#include<stdio.h>
#include"stack_int.h"

int push(int [],int *,int,int);
int pop(int [],int *);
int peep(int [],int *,int);
int change(int [],int*,int,int);

void main()
{
int n=3;
int s[n+1],top=0;
int x,y,num;
while(1)
{
printf("enter 0,1,2,3 and 4 for push change peep and pop quit");
scanf("%d",&num);
switch(num)
{
case 0:

	while(1)
	{
		printf("enter ekements to push\n");
		scanf("%d",&x);
		if(push(s,&top,x,n)==0)
		break;
		else
		{
		printf("element pushed\n");
		}
	}
break;
case 1:
	while(1)
	{
		printf("enter index\n");
		scanf("%d",&x);
		printf("enter element");
		scanf("%d",&y);
		if(change(s,&top,x,y)==0)
		break;
		else
		printf("element changed\n");
		break;
	}
break;
case 2:
	while(1)
	{
	printf("enter index\n");
	scanf("%d",&x);
	int p=peep(s,&top,x);
	if(p!=0)
	{
		printf("%d\n",p);
		break;
	}
	else
	break;
	
	}
break;
/*for(int i=n;i>=1;i--)
{
printf("%d",s[i]);
}

*/

case 3:

	while(1)
	{
		//printf("enter ekements to push\n");
		//scanf("%d",&x);
	int p=pop(s,&top);
	if(p!=0)
	printf("%d\n",p);
	else
	break;
	}
break;
case 4:
exit(0);
default:
printf("ty");
}
}
}



