#include <stdio.h>

int main(void)
{
	double num;
	int *ptr = &num;

	printf("두 정수 입력: ");
	scanf("%d %d", ptr, ptr + 1);

	printf("%d + %d = %d\n", *ptr, *(ptr + 1), *ptr + *(ptr + 1));
	printf("%d - %d = %d\n", *ptr, *(ptr + 1), *ptr - *(ptr + 1));
	printf("%d * %d = %d\n", *ptr, *(ptr + 1), *ptr * *(ptr + 1));
	printf("%d를 %d로 나눈 몫 = %d\n", *ptr, *(ptr + 1), *ptr / *(ptr + 1));
	printf("%d를 %d로 나눈 나머지 = %d\n", *ptr, *(ptr + 1), *ptr % *(ptr + 1));

	return 0;
}
