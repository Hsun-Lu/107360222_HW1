#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	while (1)
	{
		printf("�п�J��Ӿ�ơG");
		scanf_s("%d %d", &a, &b);
		if (a % b == 0)
		{
			printf("%d�O%d������\n", a, b);
		}
		else
		{
			printf("%d���O%d������\n", a, b);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}