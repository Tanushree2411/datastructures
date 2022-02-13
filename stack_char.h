int push(char a[],int *t,char e,int n)
{
	if(*t<n)
	{
	*t=*t+1;
	a[*t]=e;
	printf("top is %d",*t);
	return 1;
	}
	else
	{
	printf("stack overflowed\n");

	return 0;
	}
}
char pop(char a[],int *t)
{
	if(*t==0)
	{
	printf("stack underflowed");
	return 't';
	}
	else
	{
	*t=*t-1;
	return a[*t+1];
	}
}
char peep(char a[],int *t,int e)
{
	if((*t-e+1<=0))
	{
	printf("stack underflowed");
	return '0';
	}
	else
	{
	//a[*t-e+1]=f;
	return a[*t-e+1];
	}
}
int change(char a[],int *t,int e,char f)
{
	if((*t-e+1<=0))
	{
	printf("stack underflowed");
	return 0;
	}
	else
	{
	a[*t-e+1]=f;
	return 1;
	}
}
