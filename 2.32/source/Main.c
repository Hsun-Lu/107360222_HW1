#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float h, w, a, bmi;
	printf("  BMI計算，結果如下：\n");
	printf("  BMI < 18.5 -------> 過輕\n");
	printf("  18.5 ≦ BMI < 24 -> 正常\n");
	printf("  24 ≦ BMI < 27 ---> 過重\n");
	printf("  27 ≦ BMI --------> 肥胖\n\n");
	while (1)
	{
		printf("請輸入你的身高(m)及體重(kg)：");
		scanf_s("%f %f", &h, &w);
		a = pow(h, 2);
		bmi = w / a;
		printf("\n你的BMI為%.2f\n", bmi);

		if (bmi < 18.50)
		{
			printf("\n過輕\n\n");
		}
		if (18.50 <= bmi && bmi < 24.00)
		{
			printf("\n正常\n\n");
		}
		if (24.00 <= bmi && bmi < 27.00)
		{
			printf("\n過重\n\n");
		}
		if (27.00 <= bmi)
		{
			printf("\n肥胖\n\n");
		}
	}
	system("pause");
	return 0;
}