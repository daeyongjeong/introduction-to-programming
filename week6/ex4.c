#include <stdio.h>

int main(void)
{
	int temp = 0;
	int n1 = 0, n2 = 0;
	int result = 0;

	printf("\n초기 temp 값 = %d\n\n", temp);
	
	printf("두 정수 입력: ");
	scanf("%d %d", &n1, &n2);

	result = (n1 < n2) && (temp++ == 1);
	printf("\n1. temp = %d True or False = %d\n\n", temp, result);

	temp = 0;
	printf("===== temp값 0으로 초기화 =====\n\n");

	result = (n1 > n2) && (--temp == 0);
	printf("2. temp = %d True or False = %d\n\n", temp, result);

	return 0;
}
