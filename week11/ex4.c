#include <stdio.h>

#define SIZE 10

void getrank(int[], int[]);

int main(void)
{
	int score[SIZE];
	int rank[SIZE];

	for (int i = 0; i < SIZE; i++)
		rank[i] = SIZE;

	printf("%d명의 학생들의 C언어 점수를 입력받고 학생들의 석차를 구하는 문제\n\n", SIZE);

	printf("=========== 학생의 C언어 점수 입력부 ==========\n\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d번째 학생의 C언어 점수 입력: ", i + 1);
		scanf("%d", &score[i]);
	}

	getrank(score, rank);

	printf("\n");
	printf("=========== 학생의 C언어 점수 입력부 ==========\n\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d번 학생의 점수 : %3d, 등수 : %2d\n", i + 1, score[i], rank[i]);
	}

	printf("\n");

	return 0;
}

void getrank(int score[], int rank[])
{
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			if (score[i] >= score[j] && i != j)
				rank[i]--;
}
