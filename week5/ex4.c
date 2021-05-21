#include <stdio.h>

int main(void)
{
	double x1 = 0.0, y1 = 0.0;
	double x2 = 0.0, y2 = 0.0;
	double a = 0.0, b = 0.0;

	printf("첫 번째 점 x1, y1값을 입력하시오> ");
	scanf(" %lf %lf", &x1, &y1);

	printf("\n두 번째 점 x2, y2값을 입력하시오> ");
	scanf(" %lf %lf", &x2, &y2);

	a = (y2 - y1) / (x2 - x1);
	b = y1 - (a * x1);
	printf("\n\n기울기: %.2f, y절편: %.2f\n", a, b);
	printf("두 점을 연결하는 직선의 방정식: Y = %.2fX + %-.2f\n", a, b);	

	return 0;
}
