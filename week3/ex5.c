#include <stdio.h>

int main(void)
{
	char ch;

	printf("getchar함수를 이용한 문자 입력: ");
	ch = getchar();
	printf("\ngetchar함수를 이용한 문자 입력은 한 글자만 출력됨: %c\n\n", ch);
	printf("putchar함수를 이용한 문자 출력: ");
	putchar(ch);
	printf("\n\n");

	return 0;
}
