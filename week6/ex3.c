#include <stdio.h>

int main(void)
{
	int n1 = 0;
	int n2 = 0;

	n1 = sizeof(int);
	n2 = sizeof(char);

	printf("\n n1 = %d\n", n1++);
	printf(" n2 = %d\n", n2--);
	printf(" n1 = %d\n", n1 -= 5);
	
	n2 = --n1 && n2;

	printf(" n2 = %d\n", n2);
	printf(" size = %d\n", sizeof("this is string."));
	printf(" true or false = %d\n", sizeof(n1) > sizeof(n2));
	printf(" true or false = %d\n\n", n1 > n2);

	return 0;
}
