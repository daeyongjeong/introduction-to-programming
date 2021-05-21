#include <stdio.h>

void encrypt(char[], char[]);
void decrypt(char[], char[]);

int main(void)
{
	char str[8];
	char key[7] = { 2,5,5,8,3,1,8 };

	printf("문자열을 입력받고 그 문자열을 암호화, 복호화하는 문제\n");
	printf("암호화와 복호화할 때 사용되는 키값은 2,5,5,8,3,1,8로 동일\n\n");

	printf("암호화 할 문자열 입력: ");
	scanf("%7s", str);

	encrypt(str, key);
	decrypt(str, key);
	printf("\n");

	return 0;
}

void encrypt(char s[], char key[])
{
	printf("암호화 결과: ");
	for (int i = 0; i < 7; i++) {
		s[i] += key[i];
		printf("%c", s[i]);
	}
	printf("\n");
}

void decrypt(char s[], char key[])
{
	printf("복호화 결과: ");
	for (int i = 0; i < 7; i++) {
		s[i] -= key[i];
		printf("%c", s[i]);
	}
	printf("\n");
}
