#include <stdio.h>
#include <stdlib.h>
#include <math.h>
unsigned long long int fibonacci(unsigned int qu);

int main(void)
{
	unsigned int quantity=1;
	printf("材n禣ん计: ");
	scanf_s(" %u", &quantity);
	printf("禣ん计: %u\n", fibonacci(quantity));
	printf("程禣ん计: %llu\n", fibonacci(UINT_MAX));
	system("pause");
	return 0;
}


unsigned long long int fibonacci(unsigned int qr)
{
	unsigned long long int n1 = 0, n2=1 ,x;
	unsigned int i;

	for (i = 2; i < qr; i++)
	{
		x = n1 + n2;
		n1 = n2;
		n2 = x;

		if (n1 > n2)
		{
			break;
		}
	}
	if (qr == 1)
	{
		return n1;
	}
	else if (qr == 2)
	{
		return n2;
	}
	else
	{
		return x;
	}
		
}
