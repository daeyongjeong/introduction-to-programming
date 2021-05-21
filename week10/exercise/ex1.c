#include <stdio.h>

int main(void)
{
	int a[3][3] = { 1, 3, 5, 7, 9, 11, 13, 15, 17 };
	int b[3][3];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			b[i][j] = a[j][i];

	printf("    original matrix\n\n");
	printf("     [0]열 [1]열 [2]열\n");
	printf("[0]행%5d %5d %5d\n", a[0][0], a[0][1], a[0][2]);
	printf("[1]행%5d %5d %5d\n", a[1][0], a[1][1], a[1][2]);
	printf("[2]행%5d %5d %5d\n\n", a[2][0], a[2][1], a[2][2]);
	
	printf("    transpose matrix\n\n");
	printf("     [0]열 [1]열 [2]열\n");
	printf("[0]행%5d %5d %5d\n", b[0][0], b[0][1], b[0][2]);
	printf("[1]행%5d %5d %5d\n", b[1][0], b[1][1], b[1][2]);
	printf("[2]행%5d %5d %5d\n", b[2][0], b[2][1], b[2][2]);

	return 0;
}
