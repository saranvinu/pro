#include <stdio.h>

int main(void) {
	char str[20];
	gets(str);
	if(strcmp(str,"sunday"))
	{
	    printf("True");
	}
	else
	{
	    printf("False");
	}
	return 0;
}
