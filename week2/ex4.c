#include <stdio.h>

int main(void)
{
	int cash = 56970;
	
	printf("%d원은\n", cash);
	printf("만원짜리 %d개\n", cash / 10000);
	cash -= (cash / 10000) * 10000;
	printf("오천원짜리 %d개\n", cash / 5000);
	cash -= (cash / 5000) * 5000;
	printf("천원짜리 %d개\n", cash / 1000);
	cash -= (cash / 1000) * 1000;
	printf("백원짜리 %d개\n", cash / 100);
	cash -= (cash / 100) * 100;
	printf("십원짜리 %d개입니다.\n", cash / 10);
	cash -= (cash / 10) * 10;

	return 0;
}
