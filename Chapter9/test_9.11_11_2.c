#include <stdio.h>

int fib(int n);

int main()
{
	int i=0,n=0;
	printf("Please input a number:\n");
	scanf("%d",&n);
	fib(n);
	printf("%d\n",fib(n));
	return 0;
}

int fib(int n)
{
	int i=1,a=1,b=1,c=1;
	if(n<=2)
		return 1;
	else
		for(i=1;i<n-1;i++)
		{
			c=a+b;
			a=b;
			b=c;
		}	
		return c;
}