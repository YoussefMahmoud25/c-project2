#include <stdio.h>
#include <string.h>

void main()
{
	char name[7];
	char ch = 0;
	int i = 0;
	printf("Enter name: ");
	while (ch != '\n')
	{
		ch = getchar();
		name[i] = ch;
		i++;
	}
	name[i] = '\0';
	printf("Name : % s", name);
	size_t len = strlen(name) - 1;
	printf("\nlength=%d", len);
	if (name[i] = NULL || len < 5 || len>5 || name[2] != '/')
	{
		printf("error");
	}
	else
	{
		printf("ok");
	}




}