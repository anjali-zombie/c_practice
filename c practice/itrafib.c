#include<stdio.h>
#include<stdlib.h>

int fibrecur(int n)
{
	if (n==0 || n==1)
	{
		return n-1;
	}
	else
	{
		return fibrecur(n-1)+fibrecur(n-2);
	}
}

int fibitr(int n)
{
	int a =0;
	int b =1;
	for ( int i =0;i<n-1;i++)
	{
		b =a+b;
		a=b-a;
	}
	return a;
}

int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	printf("fibonacci series is at position %d is %d/n",n, fibitr(n));
	printf("fibonacci series is at position %d is %d/n",n, fibrecur(n));
}
	


