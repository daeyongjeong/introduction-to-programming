#include <stdio.h>
#include <string.h>

int main(void) {
	char s[50] = { '\0' };
	char temp;

	printf("\n원문 문자열 입력: ");
	scanf_s("%s", &s, sizeof(s));

	int size = strlen(s);
	// 문자열 순서 거꾸로 뒤집기
	for (int i = 0; i < size / 2; i++) {
		temp = s[i];
		s[i] = s[(size - 1) - i];
		s[(size - 1) - i] = temp;
	}

	// 뒤집어진 문자열 출력
	printf("\n역순 문자열: %s\n\n", s);

	return 0;
}
