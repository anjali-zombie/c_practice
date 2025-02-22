#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *ptr = NULL;
	ptr = fopen("myfile.txt","r");
	char str[4];
	fgets(str , 5,ptr);
	printf("the string is %s\n", str);
	fclose(ptr);
}	
