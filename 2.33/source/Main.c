#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d, e;
	float t;
	printf("計算一天開車所需費用：\n");
	printf("\n1.一天的總里程數(km)：");
	scanf_s("%d", &a);
	printf("\n2.汽油一公升多少錢：");
	scanf_s("%d", &b);
	printf("\n3.平均一公升能跑多少(km)：");
	scanf_s("%d", &c);
	printf("\n4.一天的停車費：");
	scanf_s("%d", &d);
	printf("\n5.一天的通路費：");
	scanf_s("%d", &e);
	t = (a / c)*b + d + e;
	printf("\n平均一天的花費為%.2f元\n",t);
	system("pause");
	return 0;
}