#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i,a,b;
	printf("  1����  2����  3����\n");
	for (i = 0; i <= 10; i++)
	{
		a = pow(i, 2);
		b = pow(i, 3);
		printf("    %d      %d      %d\n", i, a, b);
	}
	system("pause");
	return 0;
}