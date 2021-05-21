#include <stdio.h>

void HanoiTop(int num);
void move(int num, char src, char aux, char dst);

int main(void)
{
	int num;

	printf("하노이탑 문제입니다.\n");
	printf("탑의 층수를 입력하세요: ");
	scanf("%d", &num);
	printf("\n");
	HanoiTop(num);
	return 0;
}

void HanoiTop(int num)
{
	move(num, 'A', 'B', 'C');
}

void move(int num, char src, char aux, char dst)
{
	if (num > 0) {
		move(num - 1, src, dst, aux);

		/* 을/를 */
		if (num % 10 == 2 || num % 10 == 4 || num % 10 == 5 || num % 10 == 9)
			printf("원반 %d를 %c에서 %c로 옮깁니다.\n", num, src, dst);
		else
			printf("원반 %d을 %c에서 %c로 옮깁니다.\n", num, src, dst);

		move(num - 1, aux, src, dst);
	}
}
