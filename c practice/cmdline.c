#include<stdio.h>
#include<stdlib.h>

int main(int argc , char const *argv[])
{
	printf("value of argc is %d\n", argc);
	for(int i=0; i<argc; i++)
	{
		printf("this argument at index number %d has value of %s \n",i ,argv[i]);
	}
	return 0;

	//first argument is string which is program name which argc =1
}


