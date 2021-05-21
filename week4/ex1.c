#include <stdio.h>

int main(void)
{
	int a = 3, b = 21;
	double c = 18.03, d = 3.21;

	int sum_i = a + b, diff_i = a - b;
	double sum_d = c + d, diff_d = c - d;

	puts("");

	printf("두 정수의 합 ");
	putchar('=');
	printf(" %6d\n", sum_i);
	printf("두 정수의 차 ");
	putchar('=');
	printf(" %6d\n", diff_i);

	puts("");

	printf("두 실수의 합 ");
	putchar('=');
	printf(" %6.2f\n", sum_d);
	printf("두 실수의 차 ");
	putchar('=');
	printf(" %6.3f\n", diff_d);

	puts("");

	return 0;
}
