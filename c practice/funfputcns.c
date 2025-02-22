#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *ptr;
	ptr = fopen("myfile.txt","a+");

	fputc('o',ptr);
	fputc('1',ptr);
        fputs(" heloooo gyuysssssssssssssssssssssssssss",ptr);	
	fputs("12345678@!~$%^&*******************(((((())))))))))",ptr);


	fclose(ptr);
}
