#include <stdio.h>

int main(void)
{
	int value = 0x1f10127f;
	char *pc = &value;

	printf("변수명     저장값          주소값\n");
	printf("---------------------------------------\n");
	printf("value      %#10x      %p\n\n", value, &value);
	printf("*(pc+0)    %-#10x %c    %p\n", *pc, *pc, pc);
	printf("*(pc+1)    %-#10x %c    %p\n", *(pc + 1), *(pc + 1), pc + 1);
	printf("*(pc+2)    %-#10x %c    %p\n", *(pc + 2), *(pc + 2), pc + 2);
	printf("*(pc+3)    %-#10x %c    %p\n", *(pc + 3), *(pc + 3), pc + 3);

	return 0;
}
