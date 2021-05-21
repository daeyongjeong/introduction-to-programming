#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	printf("증감, 관계, 논리 연산\n\n");

	printf("(a++ == 20) && (b++ == 20)\n");
	printf("(a++ == 20) && (b++ == 20)\n");
	printf("(a++ == 21) && (b++ == 20)\n");
	printf("(a++ == 21) && (b++ == 20)\n\n");
		
	printf("a의 값은: 23\n");
	printf("b의 값은: 18\n");

	printf("\n초기 a, b 값을 입력: ");
	scanf(" %d %d", &a, &b);

	(a == 19 && b == 16) ? printf("\n정답입니다!\n") : printf("\n틀렸습니다!\n");

	return 0;
}
