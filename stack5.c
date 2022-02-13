#include<stdio.h>
#include"stack_char.h"
int push(char [],int *,char,int);
char pop(char [],int *);
char peep(char [],int *,int);
int change(char [],int*,int,char);

void main()
{
int n=3;
char s[n+1];
int top=0;
char x,y;
int z,num;
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
		scanf("%s",&x);
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
		scanf("%d",&z);
		printf("enter element");
		scanf("%s",&y);
		if(change(s,&top,z,y)==0)
		break;
		else
		printf("element changed\n");
		break;
		for(int i=n;i>=1;i--)
		{
		printf("%s",s[i]);
		}

	}
break;
case 2:
	while(1)
	{
	printf("enter index\n");
	scanf("%d",&z);
	char p=peep(s,&top,z);
	if(p!='0')
	{
		printf("%c\n",p);
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
	char p=pop(s,&top);
	if(p!='t')
	printf("%c\n",p);
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



