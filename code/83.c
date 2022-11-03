//write a program in C to print all alphabet using pointer

#include<stdio.h>
#include<stdlib.h>

int main()
{

	char* ch;

	*ch = 'A';	

	
	while (*ch <= 'Z') {

		printf("%c\n", *ch);
		*ch = *ch + 1;
	}
    return 0;

}