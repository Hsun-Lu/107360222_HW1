#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	while (1)
	{
		printf("�п�J�@�Ӿ�ơG");
		scanf_s("%d", &a);
		if (a % 2 == 0)
		{
			printf("���Ƭ�����(even)\n");
		}
		else
		{
			printf("���Ƭ��_��(odd)\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}