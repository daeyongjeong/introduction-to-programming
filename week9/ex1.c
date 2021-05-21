#include <stdio.h>

int main(void)
{
	int num1, num2, temp;
	int *ptr1 = &num1, *ptr2 = &num2;

	printf("두 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	
	printf("\n교환 전 a -> %d, b -> %d\n\n", num1, num2);

	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("값에 의한 호출\n");
	printf("교환 후 a -> %d, b -> %d\n\n", num1, num2);

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	printf("주소 참조에 의한 호출\n");
	printf("교환 후 a -> %d, b -> %d\n\n", *ptr1, *ptr2);

	return 0;
}
