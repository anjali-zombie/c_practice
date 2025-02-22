#include<stdio.h>

void evenodd(int num)
{
	if(num %2 ==0)
	{
		goto even;
	}
	else
	{
		goto odd;
	}
even:
	printf("number is even");
	return;

odd:
	printf("number is odd");
	return;
}

int main()
{
	int num = 26;
	evenodd(num);
	return 0;
}


