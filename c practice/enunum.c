#include<stdio.h>

enum state { working = 0, failed , freezed};

enum state currstate = 2;

enum state findstate() 
{
	return currstate;
}

int main()
{
	(findstate () ==working)? printf("working") : printf("not working");
	return 0;
}
