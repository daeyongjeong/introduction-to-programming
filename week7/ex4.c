#include <stdio.h>

int main(void)
{
	int choice = 0;

	printf("문제 선택(0 입력 시 종료): ");	scanf("%d", &choice);
	printf("\n");

	switch (choice) {
	case 0:
		return 0;
	case 1:
		{
			for (int i = 1; i <= 50; i++) {
				int tens = i / 10, units = i % 10;

				if ((tens > 0 && tens % 3 == 0) && (units > 0 && units % 3 == 0))
					printf("짝!짝! ");
				else if ((tens > 0 && tens % 3 == 0) || (units > 0 && units % 3 == 0))
					printf("짝!    ");
				else
					printf("%2d     ", i);

				if (i % 15 == 0)
					printf("\n");
			}

			printf("\n\n");
			return 0;
		}
		break;
	case 2:
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
		break;
	case 3:
		{
			int loop = 0;

			while (loop++ < 2) {
				int yyyy = 0, mm = 0, dd = 0;
				int count = 0, count2 = 0;
				int i = 0, j = 0;

				printf("년도를 입력하세요: ");	scanf("%d", &yyyy);
				printf("월을 입력하세요: ");		scanf("%d", &mm);
				printf("일을 입력하세요: ");		scanf("%d", &dd);

				while (++i < yyyy) {
					if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
						count++;
				}

				while (++j < mm) {
					if (j == 2)
						count2 += 28;
					else if (j == 4 || j == 6 || j == 9 || j == 11)
						count2 += 30;
					else
						count2 += 31;
				}

				printf("\n%d년 %d월 %d일까지의 윤년 횟수: %d\n", yyyy, mm, dd, count);
				printf("입력한 날까지 올해 경과된 일 수: %d\n", count2 + dd);
				printf("%d년 %d월 %d일은 서기 1년 1월 1일부터 총 %d째 되는 날입니다.\n\n", yyyy, mm, dd, (yyyy - 1) * 365 + count + count2 + dd);
			}

			return 0;
		}
		break;
	}

	return 0;
}