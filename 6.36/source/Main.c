#include <stdlib.h>
#include <stdio.h>
#include<string.h>
void stringReverse(char string[]);

int i, j;

int main(void)
{
	char string[] = "ABCDEFG12345";
	i = strlen(string) - 1;
	printf("Origin string : %s\n   New string : ", string);
	stringReverse(string);
	printf("\n");
	system("pause");
	return 0;
}

void stringReverse(char string[])
{
	if (i == 0)
	{
		printf("%c", string[i]);
	}
	else
	{
		printf("%c", string[i]);
		i--;
		stringReverse(string);
	}
}

