#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	while (1)
	{
		printf("請輸入兩個整數：");
		scanf_s("%d %d", &a, &b);
		if (a % b == 0)
		{
			printf("%d是%d的倍數\n", a, b);
		}
		else
		{
			printf("%d不是%d的倍數\n", a, b);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}