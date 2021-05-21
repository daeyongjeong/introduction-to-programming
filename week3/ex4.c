#include <stdio.h>

int main(void)
{
	double km;

	printf("킬로미터 수를 입력하면 마일로 변환합니다.\n\n");
	
	printf("킬로미터 입력: ");
	scanf("%lf", &km);
	printf("입력한 km 수: %.3f\n", km);
	printf("입력한 km -> mile: %.2f\n", km * 0.621371);

	return 0;
}
