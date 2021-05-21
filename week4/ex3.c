#include <stdio.h>

int main(void)
{
	int a, b;

	printf("사칙연산할 값을 입력하세요 : ");
	scanf("%d %d", &a, &b);

	puts("");
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d 나머지 %d = %d\n", a, b, a % b);

	return 0;
}
