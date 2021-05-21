#include <stdio.h>

void print_seats(char seats[][10]);
void show_menu(void);

int getcol(char input[]);
int getrow(char input[]);

void add_seat(char seats[][10], int row, int col);
void remove_seat(char seats[][10], int row, int col);

int main(void)
{
	char seats[10][10];
	char input[5];

	int row, col;

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			seats[i][j] = 'O';

	printf("====== 영화관 좌석 예매 프로그램 ======\n\n");
	print_seats(seats);
	show_menu();

	while (1) {
		printf("=> ");
		scanf("%s", input);
		printf("\n");

		if (input[0] == '+' || input[0] == '-') {
			if ((row = getrow(input)) == -1) {
				printf("잘못 입력하셨습니다.\n\n");
				continue;
			}
			if ((col = getcol(input)) == -1) {
				printf("잘못 입력하셨습니다.\n\n");
				continue;
			}
		}

		switch (input[0]) {
		case '+':
			add_seat(seats, row, col);
			break;
		case '-':
			remove_seat(seats, row, col);
			break;
		case 'C': case 'c':
			print_seats(seats);
			break;
		case 'X': case 'x':
			return 0;
		default:
			printf("잘못 입력하셨습니다.\n\n");
		}
	}

	return 0;
}

void print_seats(char seats[][10])
{
	printf(" -------------------------------\n");
	printf(" |                             |\n");
	printf(" |    ----- 스 크 린 ------    |\n");
	printf(" |                             |\n");
	printf(" |     A B C D E F G H I J     |\n");
	printf(" |     -------------------     |\n");

	for (int i = 0; i < 10; i++) {
		printf(" | %2d| ", i + 1);

		for (int j = 0; j < 10; j++)
			printf("%c ", seats[i][j]);

		printf("    |\n");
	}

	printf(" -------------------------------\n\n");
}

void show_menu(void)
{
	printf("----------------------\n");
	printf(" 예약 예시 => +A2\n");
	printf(" 예약취소 예시 => -A2\n");
	printf(" 좌석현황 출력 C or c\n");
	printf(" 예약 종료 => X or x\n");
	printf("----------------------\n\n");
}

int getrow(char input[])
{
	/* 행은 1부터 10까지의 숫자 */
	if (input[4] == '\0' && input[2] == '1' && input[3] == '0') {
		return 9;
	} else if (input[3] == '\0' && '0' < input[2] && input[2] <= '9') {
		return input[2] - 49;
	} else {
		return -1;
	}
}

int getcol(char input[])
{
	/* 열은 A부터 H까지 또는 a부터 h까지의 문자 */
	if (input[1] >= 65 && input[1] <= 74) {
		return input[1] - 65;
	} else if (input[1] >= 97 && input[1] <= 106) {
		return input[1] - 97;
	} else {
		return -1;
	}
}

void add_seat(char seats[][10], int row, int col)
{
	if (seats[row][col] == 'X') {
		printf("이미 예약된 좌석입니다.\n\n");
		return;
	}

	seats[row][col] = 'X';
	printf("예약 완료!\n\n");
}

void remove_seat(char seats[][10], int row, int col)
{
	if (seats[row][col] == 'O') {
		printf("좌석을 다시 한 번 확인하세요.\n\n");
		return;
	}

	seats[row][col] = 'O';
	printf("예약 취소!\n\n");
}
