#include <stdio.h>

int main(void)
{
	int month;

	printf("이번 달을 입력하세요: ");
	scanf("%d", &month);

	printf("%d월은 ", month);
	month <= 6 ? printf("상반기") : printf("하반기");
	printf("입니다.\n");

	return 0;
}
