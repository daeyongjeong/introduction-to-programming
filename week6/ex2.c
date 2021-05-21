#include <stdio.h>

#define HR(X) ((X) / 3600)
#define MN(X) ((X) % 3600 / 60)
#define SC(X) ((X) % 3600 % 60)

int main(void)
{
	int sec = 0;

	printf("시, 분, 초로 변환하고 싶은 초를 입력: ");
	scanf("%d", &sec);
	printf("\n입력한 %d초 -> %d시 %d분 %d초\n\n", sec, HR(sec), MN(sec), SC(sec));

	return 0;
}
