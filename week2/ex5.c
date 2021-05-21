#include <stdio.h>

int main(void)
{
	float x = 155.423;
	double y = 20.787;
	int z = 50;

	printf("x = %.3f, y = %.3f, z = %d\n", x, y, z);
	printf("x + y + z = %.3f\n", x + y + z);
	printf("x - y - z = %.3f\n", x - y - z);
	printf("x / y / z = %.3f\n", x / y / z);
	printf("(x * y) / z = %.3f\n\n", (x * y) / z);

	printf("float x : %d\n", sizeof(x));
	printf("double y : %d\n", sizeof(y));
	printf("int z : %d\n", sizeof(z));

	return 0;
}
