#include <stdio.h>

#define PI 3.14
#define AREA(X) (PI * (X) * (X))
#define CIRCUMFERENCE(X) (2 * PI * (X))

int main(void)
{
	int r = 0;

	printf("반지름 r 입력: ");
	scanf("%d", &r);

	printf("\n반지름이 %d인 원의 넓이 = %10.2f\n", r, AREA(r));
	printf("반지름이 %d인 원의 둘레 = %10.2f\n\n", r, CIRCUMFERENCE(r));

	return 0;
}
