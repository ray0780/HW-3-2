#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int powercul(int x1, int power1);

int main(void)
{
	int x,power,y;

	printf("Enter a number and power: ");
	scanf_s("%d%d", &x, &power);

	y = powercul(x, power);

	printf("(%d,%d))ans: %d\n",x,power, y);
	system("pause");
	return 0;
}

int  powercul(int x, int power)
{
	if (power != 1)
	{
		return (x*powercul(x, power - 1));
	}
	else
	{
		return x;
	}

}