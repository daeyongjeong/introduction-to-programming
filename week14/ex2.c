#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[20];
	int count;
	int price;
} Product;


int main(void)
{
	int num;
	Product *pd;

	printf("상품의 개수를 입력하세요: ");
	scanf("%d", &num);

	pd = (Product *)malloc(sizeof(Product) * num);
	// num 값 만큼의 product 자료형 배열 생성

	printf("상품의 이름, 수량, 가격을 입력한다.\n");
	for (int i = 0; i < num; i++) {
		printf("\n이름, 수량, 가격 순서로 입력\n");
		scanf("%19s %d %d", pd[i].name, &pd[i].count, &pd[i].price);
	}

	printf("\n\n이름\t수량\t가격\n");
	for (int i = 0; i < num; i++) {
		printf("%s\t%d\t%d\n", pd[i].name, pd[i].count, pd[i].price);
	}

	free(pd);
	return 0;
}