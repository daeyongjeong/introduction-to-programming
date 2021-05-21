#include <stdio.h>

int main(void)
{
	int point1 = 95;
	int point2 = 84;
	int total = point1 + point2;

	printf("total = %d\n", total);
	printf("mean1 = %d\n", total / 2);
	printf("mean2 = %f\n", total / 2.0);

	return 0;
}
