#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE * fptr;
	fptr = fopen("anjali.txt",'r');
	fscanf(fptr,"%s %s %s %d", str1 , str2 , str3, &year);
	char c = fgetc(fptr);
}

