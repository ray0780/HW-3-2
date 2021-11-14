#include <stdio.h>
#include <stdlib.h>

void Hanoi(int x,int stack1,int stcack2,int stack3);


int main(void)
{
	int x;	
	printf("輸入河內塔盤子數量: ");
	scanf_s("%d", &x);
	Hanoi(x, 1, 2, 3);
	system("pause");
	return 0;
}

void Hanoi(int x, int s1, int s2, int s3)
{
	if (x != 1)
	{
		Hanoi(x - 1, s1, s3, s2);
		printf(" 從%d---->%d\n", s1, s3);
		Hanoi(x - 1, s2, s1, s3);
	}
	else
	{
		printf(" 從%d---->%d\n", s1, s3);
	}
}