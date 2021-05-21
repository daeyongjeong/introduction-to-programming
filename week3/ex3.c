#include <stdio.h>

int main(void)
{
	int celsius;
	float fahr;

	printf("섭씨 온도 입력 -> 화씨 온도 출력 프로그램\n\n");

	printf("섭씨 온도: ");
	scanf("%d", &celsius);
	
	fahr = (9.0 / 5.0) * celsius + 32.0;
	printf("섭씨 온도 -> 화씨 온도 = %.2f\n", fahr);

	return 0;
}
