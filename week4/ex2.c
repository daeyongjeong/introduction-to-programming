#include <stdio.h>

int main(void)
{
	long int a = 3000000000;
	unsigned int b = 3000000000;

	printf("overflow  : %d\n", a);
	printf("정상 출력 : %u\n", b);

	return 0;
}
