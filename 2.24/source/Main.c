#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	while (1)
	{
		printf("叫块俱计");
		scanf_s("%d", &a);
		if (a % 2 == 0)
		{
			printf("计案计(even)\n");
		}
		else
		{
			printf("计计(odd)\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}