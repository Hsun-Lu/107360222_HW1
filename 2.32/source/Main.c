#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float h, w, a, bmi;
	printf("  BMI�p��A���G�p�U�G\n");
	printf("  BMI < 18.5 -------> �L��\n");
	printf("  18.5 �� BMI < 24 -> ���`\n");
	printf("  24 �� BMI < 27 ---> �L��\n");
	printf("  27 �� BMI --------> �έD\n\n");
	while (1)
	{
		printf("�п�J�A������(m)���魫(kg)�G");
		scanf_s("%f %f", &h, &w);
		a = pow(h, 2);
		bmi = w / a;
		printf("\n�A��BMI��%.2f\n", bmi);

		if (bmi < 18.50)
		{
			printf("\n�L��\n\n");
		}
		if (18.50 <= bmi && bmi < 24.00)
		{
			printf("\n���`\n\n");
		}
		if (24.00 <= bmi && bmi < 27.00)
		{
			printf("\n�L��\n\n");
		}
		if (27.00 <= bmi)
		{
			printf("\n�έD\n\n");
		}
	}
	system("pause");
	return 0;
}