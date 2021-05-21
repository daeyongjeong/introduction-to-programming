#include <stdio.h>

void getodd(int[], int);
void geteven(int[], int);

int main(void)
{
	int num[10];

	printf("입력한 값까지 짝수 or 홀수끼리의 합을 구하는 문제\n\n");

	printf("총 10개의 숫자 입력: ");
	for (int i = 0; i < 10; i++)
		scanf(" %d", &num[i]);
	printf("\n");

	getodd(num, sizeof(num) / sizeof(int));
	geteven(num, sizeof(num) / sizeof(int));

	return 0;
}

void getodd(int arr[], int len)
{
	int sum = 0;

	printf("입력값 중 홀수: ");

	for (int i = 0; i < len; i++)
		if (arr[i] % 2 == 1) {
			printf("%d ", arr[i]);
			sum += arr[i];
		}

	printf("\n입력값의 홀수합: %d\n\n", sum);
}

void geteven(int arr[], int len)
{
	int sum = 0;

	printf("입력값 중 짝수: ");

	for (int i = 0; i < len; i++)
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
			sum += arr[i];
		}

	printf("\n입력값의 짝수합: %d\n\n", sum);
}
