#include <stdio.h>
#include <stdlib.h>

void inverse(int *);

void main()
{
	int x = 100;
	int y = addbyone(&x);
	printf("x=%d\n", x);
	system("pause");
}

int addbyone(int* xp)
{
	(*xp)++;
	printf("*xptr=%d\n", *xp);
	return *xp;
}