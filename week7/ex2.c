#include <stdio.h>

int main(void)
{
	int i = 1;

	printf("홀수 출력\n");
	while (i <= 100) {
		if (i % 2)
			printf("%2d      ", i);
		i++;
	}

	i = 1;
	printf("\n\n짝수 출력\n");
	
	while (i <= 100) {
		if (!(i % 2))
			printf("%2d      ", i);
		i++;
	}
	
	printf("\n\n");
	return 0;
}
