#include <stdio.h>

int main(void)
{
	int a = 100;
	char b = 'A';

	printf("10진수: %d\n", a);
	printf("8진수: %o\n", a);
	printf("16진수: %x\n\n", a);

	printf("문자: %c\n", b);
	printf("10진수: %d\n", b);
	printf("8진수: %o\n", b);
	printf("16진수: %x\n", b);

	return 0;
}
