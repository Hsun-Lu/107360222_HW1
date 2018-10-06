#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	while (1)
	{
		printf("叫块俱计");
		scanf_s("%d %d %d", &a, &b, &c);

		if (a >= b && b > c)
		{
			printf("程计%d程计%d\n", a, c);
		}
		if (a >= c && c >= b)
		{
			if (a == b)
			{
				printf("计妓\n");
			}
			else if (a > b)
			{
				printf("程计%d程计%d\n", a, b);
			}
		}
		if (b > a && a >= c)
		{
			printf("程计%d程计%d\n", b, c);
		}
		if (b > c && c > a)
		{
			printf("程计%d程计%d\n", b, a);
		}
		if (c > a && a >= b)
		{
			printf("程计%d程计%d\n", c, b);
		}
		if (c >= b && b > a)
		{
			printf("程计%d程计%d\n", c, a);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}