#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;

	printf("\n첫 번째 정수를 입력하세요 : ");
	scanf("%d", &x);

	printf("두 번째 정수를 입력하세요 : ");
	scanf("%d", &y);

	puts("\n");
	
	printf("논리 연산자\n\n");

	printf("논리 연산자 %d AND %d의 결과값은 %d 입니다.\n", x, y, x & y);
	printf("논리 연산자 %d OR %d의 결과값은 %d 입니다.\n", x, y, x | y);
	printf("논리 연산자 %d AND !%d의 결과값은 %d 입니다.\n", x, y, x & !y);
	printf("논리 연산자 %d OR !%d의 결과값은 %d 입니다.\n", x, y, x | !y);
	printf("논리 연산자 !%d의 결과값은 %d 입니다.\n", x, !x);
	printf("논리 연산자 !%d의 결과값은 %d 입니다.\n", y, !y);

	puts("\n");

	return 0;
}
