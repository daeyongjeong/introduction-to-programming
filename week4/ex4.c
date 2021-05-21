#include <stdio.h>

int main(void)
{
	int area;

	printf("평수를 입력하면 면적을 계산합니다.\n");
	puts("");
	
	printf("평수 입력: ");
	scanf("%d", &area);
	printf("입력된 평수: %d평\n", area);
	printf("변환 면적: %.2f제곱미터\n", area * 3.305785);

	return 0;
}
