#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a[5];
	printf("array = %p\n&array[0]=%p\n&array= %p\n", a, &a[0], &a);
	system("pause");
	return 0;
}