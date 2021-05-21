#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *fname = "q2.txt";
	FILE *fp;

	char c;
	int nc = 0, nw = 1, nl = 1;

	if ((fp = fopen(fname, "r")) == NULL) {
		fprintf(stderr, "can't open %s\n", fname);
		exit(1);
	}

	while ((c = getc(fp)) != EOF) {
		if (isalpha(c))
			nc++;
		if (c == '\n')
			nl++;
		if (c == ' ' || c == '\n' || c == '\t')
			nw++;
	}
	fclose(fp);

	printf("\n     파일 내부\n");
	printf("  문자 수 : %5d\n", nc);
	printf("  단어 수 : %5d\n", nw);
	printf("    행 수 : %5d\n\n", nl);

	return 0;
}
