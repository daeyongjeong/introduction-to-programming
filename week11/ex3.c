#include <stdio.h>

int search(int[3][4], int, int);

int main(void)
{
	int odd[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
	int even[3][4] = { 2,4,6,8,10,12,14,16,18,20,22,24 };

	int odd_n, odd_m;
	int even_n, even_m;

	printf("배열의 위치에 있는 값 중 원하는 위치값을 더하는 문제\n\n");

	printf("%8s현재 각 배열에 저장된 값\n", "");
	printf("=================홀수 배열================\n");
	printf("%11s%8s%8s%8s\n", "1열", "2열", "3열", "4열");
	printf("%3s%7d%8d%8d%8d\n", "1행", odd[0][0], odd[0][1], odd[0][2], odd[0][3]);
	printf("%3s%7d%8d%8d%8d\n", "2행", odd[1][0], odd[1][1], odd[1][2], odd[1][3]);
	printf("%3s%7d%8d%8d%8d\n\n", "3행", odd[2][0], odd[2][1], odd[2][2], odd[2][3]);

	printf("=================짝수 배열================\n");
	printf("%11s%8s%8s%8s\n", "1열", "2열", "3열", "4열");
	printf("%3s%7d%8d%8d%8d\n", "1행", even[0][0], even[0][1], even[0][2], even[0][3]);
	printf("%3s%7d%8d%8d%8d\n", "2행", even[1][0], even[1][1], even[1][2], even[1][3]);
	printf("%3s%7d%8d%8d%8d\n\n", "3행", even[2][0], even[2][1], even[2][2], even[2][3]);

	printf("홀수 배열에서의 값의 위치 선택(n행 m열): ");
	scanf("%d %d", &odd_n, &odd_m);
	printf("\n짝수 배열에서의 값의 위치 선택(n행 m열): ");
	scanf("%d %d", &even_n, &even_m);

	printf("\n입력한 홀수배열의 %d, %d에 위치한 값 = %d\n",
		odd_n, odd_m, search(odd, odd_n, odd_m));
	printf("입력한 짝수배열의 %d, %d에 위치한 값 = %d\n",
		even_n, even_m, search(even, even_n, even_m));
	printf("두 값의 합 = %d\n\n",
		search(odd, odd_n, odd_m) + search(even, even_n, even_m));

	return 0;
}

int search(int arr[3][4], int n, int m)
{
	return arr[n - 1][m - 1];
}
