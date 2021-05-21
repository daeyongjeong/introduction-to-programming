#include <stdio.h>

int main(void)
{
	int sel = 0;
	int x = 0, y = 0;
	int result = 0;
	double result2 = 0.0;
	char ch;

	printf("사칙연산 프로그램\n\n");
	printf("1. 덧셈, 2. 뺄셈, 3. 곱셈, 4. 나눗셈\n\n");

	printf("선택: ");
	scanf(" %d", &sel);
	printf("두 수 입력: ");
	scanf(" %d %d", &x, &y);

	ch = sel == 1 ? '+' :
		sel == 2 ? '-' :
		sel == 3 ? '*' : '/';

	result = sel == 1 ? x + y :
		sel == 2 ? x - y : x * y;
	result2 = (double)x / (double)y;

	printf("입력한 두 수 %d 와 %d 의 연산 결과: %d %c %d = ", x, y, x, ch, y);
	sel == 4 ? printf("%.2f\n\n", result2) : printf("%d\n\n", result);
	
	return 0;
}
