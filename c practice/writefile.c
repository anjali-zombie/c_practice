#include<stdio.h>
#include<stdlib.h>

int main()
{
        FILE * fptr;
	char str1= "anjali", str2= "appu", str3= "ritu";
	int year= 2024;
        fptr = fopen("anjali.txt","w");
        fprintf(fptr,"%s %s %s %d", str1, str2, str3, &year);
        fputs("a",fptr);
	
	fclose(fptr);

}

                                                                      
                                                                           
                                                                              
                                                                              
             
