#include <stdio.h>
#include <stdlib.h>

char change(char y);

int main(void)
{
	char x,z;

	printf("Enter the alphabet: ");
	scanf_s("%c", &x);
	z= change(x);
	if (z == '0')
	{
		printf("Not a alphabrt\n");
	}
	else
	{
		printf("change: %c\n", z);
	}
	system("pause");
	return 0;
}



char change(char y)
{
	if (y >= 'a' && y <="z")
	{
		y = y - 32;
	}
	else if (y >= 'A' && y <= 'Z')
 	{
		y = y + 32;
	}
	else
	{
		y = '0';
	}
	return y;
}