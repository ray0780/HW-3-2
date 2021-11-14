#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int lcs(int n1, int n2);

int main(void)
{
	int n1, n2,lcm;

	printf("Enter two number: ");
	scanf_s("%d%d", &n1, &n2);
	lcm = lcs(n1, n2);
	printf("LCM is %d\n", lcm);
	system("pause");
	return 0;
}

int lcs(int n1, int n2)
{
	int max=1;
	do
	{
		if (max % n1 == 0 && max % n2 == 0)
		{
			return max;
		}
		else
		{
			max++;
		}
	} while (true);
}