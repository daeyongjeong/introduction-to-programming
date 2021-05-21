#include <stdio.h>

int main(void)
{
	int a[5], b[5], c[10] = { 0 };
	int i, j, index = 0;

	printf("First 배열에 5개 숫자(오름차순으로) 저장: ");
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

	printf("Second 배열에 5개 숫자(오름차순으로) 저장: ");
	scanf("%d %d %d %d %d", &b[0], &b[1], &b[2], &b[3], &b[4]);

	for (i = 0, j = 0, index = 0; (i != 5 || j != 5) && index < 10; index++) {
		if (i == 5)			// first array ends if i == 5
			c[index] = b[j++];
		else if (j == 5)	// second array ends if j == 5
			c[index] = a[i++];
		else {
			if (a[i] < b[j])
				c[index] = a[i++];
			else if (a[i] > b[j])
				c[index] = b[j++];
			else {
				c[index] = a[i];
			}
		}

		// skip same elements in one array
		while (a[i] == c[index])
			i++;
		while (b[j] == c[index])
			j++;
	}

	printf("\nMerge 배열: ");
	for (int i = 0; i < index; i++)
		printf("%d ", c[i]);

	return 0;
}
