#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	while (1)
	{
		printf("�п�J�T�Ӿ�ơG");
		scanf_s("%d %d %d", &a, &b, &c);

		if (a >= b && b > c)
		{
			printf("�̤j�Ƭ�%d�A�̤p�Ƭ�%d\n", a, c);
		}
		if (a >= c && c >= b)
		{
			if (a == b)
			{
				printf("�T�Ƥ@�ˤj\n");
			}
			else if (a > b)
			{
				printf("�̤j�Ƭ�%d�A�̤p�Ƭ�%d\n", a, b);
			}
		}
		if (b > a && a >= c)
		{
			printf("�̤j�Ƭ�%d�A�̤p�Ƭ�%d\n", b, c);
		}
		if (b > c && c > a)
		{
			printf("�̤j�Ƭ�%d�A�̤p�Ƭ�%d\n", b, a);
		}
		if (c > a && a >= b)
		{
			printf("�̤j�Ƭ�%d�A�̤p�Ƭ�%d\n", c, b);
		}
		if (c >= b && b > a)
		{
			printf("�̤j�Ƭ�%d�A�̤p�Ƭ�%d\n", c, a);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}