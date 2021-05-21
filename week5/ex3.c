#include <stdio.h>

int main(void)
{
	int x = 0, y = 0, z = 0;
	int max = 0, min = 0;

	printf("정수1 입력: ");
	scanf("%d", &x);

	printf("정수2 입력: ");
	scanf("%d", &y);

	printf("정수3 입력: ");
	scanf("%d", &z);

	max = x >= y ? (x >= z ? x : z) : (y >= z ? y : z);
	min = x <= y ? (x <= z ? x : z) : (y <= z ? y : z);

	printf("\n입력한 정수 중에서 가장 큰 수는 %d입니다.\n", max);
	printf("입력한 정수 중에서 가장 작은 수는 %d입니다.\n\n", min);

	printf("입력한 값의 가장 큰 수와 가장 작은 수의 평균은 %.2f입니다.", (max + min) / 2.0);
	
	return 0;
}
