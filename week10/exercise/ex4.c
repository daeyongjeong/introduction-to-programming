#include <stdio.h>

int main(void)
{
	int dec, temp;
	int bin[10] = { 0 };
	int oct[10] = { 0 };
	int hex[10] = { 0 };

	printf("10진수 입력: ");
	scanf("%d", &dec);

	/* exit when dec is over 1023 (2^10) or under 0 */
	if (dec > 1023 || dec < 0)
		return -1;
	
	for (int i = 0, temp = dec; i < 10; i++) {
			bin[i] = temp % 2;
		temp /= 2;
	}

	for (int i = 0, temp = dec; i < 10; i++) {
		oct[i] = temp % 8;
		temp /= 8;
	}

	for (int i = 0, temp = dec; i < 10; i++) {
		hex[i] = temp % 16;
		temp /= 16;
	}

	printf("\n[2진수] ");
	for (int i = 9; i >= 0; i--)
		printf("%d", bin[i]);

	printf("\n[8진수] ");
	for (int i = 9; i >= 0; i--)
		printf("%o", oct[i]);

	printf("\n[16진수] ");
	for (int i = 9; i >= 0; i--)
		printf("%x", hex[i]);
	printf("\n");

	return 0;
}
