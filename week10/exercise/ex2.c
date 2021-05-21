#include <stdio.h>
#define SIZE 3

int main(void)
{
	char name[SIZE][5] = { "대한", "민국", "만세" };
	int score[SIZE][3] = {
		{ 92, 95, 89 },
		{ 100, 77, 62 },
		{ 58, 88, 74 }
	};

	printf("%23s\n", "<<점수표>>");
	printf("%4s%6s%6s%6s%8s%9s\n", "이름", "국어", "수학", "영어", "총점수", "평균");
	printf("---------------------------------------\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%4s%6d%6d%6d%8d%9.2f\n", name[i], score[i][0], score[i][1], score[i][2],
			(score[i][0] + score[i][1] + score[i][0]),
			(double)(score[i][0] + score[i][1] + score[i][2]) / 3.0);
	}
	
	return 0;
}
