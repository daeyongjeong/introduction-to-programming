#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20;
	int *p1 = &num1, *p2 = &num2;
	int sum;
	int **doublep;

	doublep = &p1;
	**doublep = 100;
	doublep = &p2;
	**doublep = 200;
	
	doublep = &sum;
	*doublep = *p1 + *p2;

	printf("변수 sum의 합: %d, 변수 sum의 주소값: %p\n\n", sum, &sum);
	printf("포인터 변수 p1 값: %d, 포인터 변수 p1이 가리키는 주소값: %p\n\n", *p1, p1);
	printf("이중포인터 변수 doublep 값: %d, 이중포인터 변수 doublep가 가리키는 주소값: %p\n\n", *doublep, doublep);

	/* 제가 생각했을 때의 출제 의도는 더블 포인터를 이용해서 num1, num2의 값을 변경하고 sum값을 계산하는 것인데, 
	   이렇게 했을 때 p1은 sum을 가리키지 않기 때문에 실행 결과 그림에서 포인터 변수 p1의 값과 주소값이 맞지 않게됩니다.
	   그래서 추가적으로 sum을 가리키고 있는 이중포인터 변수 doublep의 값과 주소값을 나타내도록 짜보았습니다. */

	return 0;
}
