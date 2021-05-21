#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 50; i++) {
		int tens = i / 10, units = i % 10;

		if ((tens > 0 && tens % 3 == 0) && (units > 0 && units % 3 == 0))
			printf("?!?! ");
		else if ((tens > 0 && tens % 3 == 0) || (units > 0 && units % 3 == 0))
			printf("?!    ");
		else
			printf("%2d     ", i);
	
		if (i % 15 == 0)
			printf("\n");
	}

	printf("\n");
	return 0;
}
