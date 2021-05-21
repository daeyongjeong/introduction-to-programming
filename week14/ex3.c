#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum boolean { FALSE, TRUE };
enum cardsuit { CLUBS, DIAMONDS, HEARTS, SPADES };
enum cardrank { ACE = 1, JACK = 11, QUEEN, KING };

char *suit_symbol[] = { "♣", "◆", "♥", "♠" };
char *rank_name[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };

typedef struct {
	enum cardsuit suit;
	enum cardrank rank;
} Card;

typedef struct {
	Card card[7];
} Player;

void deal(int num, Player *usr);
int get_suit(int num);
int get_rank(int num);


int main(void)
{
	int num;
	Player *player;

	do {
		printf("카드 게임에 몇 사람이 참가합니까? >> ");
		scanf("%d", &num);
	} while (num <= 0 || num > 4);
	printf("\n");

	player = (Player *)malloc(sizeof(Player) * num);
	deal(num, player);

	for (int i = 0; i < num; i++) {
		printf("\t%6s %1d", "player", i + 1);
	}
	printf("\n\n");

	for (int j = 0; j < 7; j++) {
		for (int i = 0; i < num; i++) {
			printf("\t%5s %2s",
				rank_name[player[i].card[j].rank - 1],
				suit_symbol[player[i].card[j].suit]);
		}
		printf("\n");
	}
	printf("\n");

	free(player);
	return 0;
}


void deal(int num, Player *player)
{
	srand(time(NULL));

	int is_dealt[52] = { 0, };

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 7; ) {
			int temp = rand() % 52;

			if (is_dealt[temp] == FALSE) {
				is_dealt[temp] = TRUE;

				player[i].card[j].suit = get_suit(temp);
				player[i].card[j].rank = get_rank(temp);

				j++;
			}
		}
	}
}

int get_suit(int num)
{
	return num / 13;
}

int get_rank(int num)
{
	return num % 13 + 1;
}