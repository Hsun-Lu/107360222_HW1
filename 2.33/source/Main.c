#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d, e;
	float t;
	printf("�p��@�Ѷ}���һݶO�ΡG\n");
	printf("\n1.�@�Ѫ��`���{��(km)�G");
	scanf_s("%d", &a);
	printf("\n2.�T�o�@���ɦh�ֿ��G");
	scanf_s("%d", &b);
	printf("\n3.�����@���ɯ�]�h��(km)�G");
	scanf_s("%d", &c);
	printf("\n4.�@�Ѫ������O�G");
	scanf_s("%d", &d);
	printf("\n5.�@�Ѫ��q���O�G");
	scanf_s("%d", &e);
	t = (a / c)*b + d + e;
	printf("\n�����@�Ѫ���O��%.2f��\n",t);
	system("pause");
	return 0;
}