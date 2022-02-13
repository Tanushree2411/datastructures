int push(int a[],int *t,int e,int n)
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
int pop(int a[],int *t)
{
	if(*t==0)
	{
	printf("stack underflowed");
	return 0;
	}
	else
	{
	*t=*t-1;
	return a[*t+1];
	}
}
int peep(int a[],int *t,int e)
{
	if((*t-e+1<=0))
	{
	printf("stack underflowed");
	return 0;
	}
	else
	{
	//a[*t-e+1]=f;
	return a[*t-e+1];
	}
}
int change(int a[],int *t,int e,int f)
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
