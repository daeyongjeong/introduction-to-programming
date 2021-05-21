#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *src, *dst;
	void filecopy(FILE *, FILE *);

	if (argc != 3) {
		fprintf(stderr, "too %s arguments\n", argc < 3 ? "few" : "many");
		exit(1);
	}

	if ((src = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "can't open %s\n", argv[1]);
		exit(1);
	}
	if ((dst = fopen(argv[2], "w+")) == NULL) {
		fprintf(stderr, "can't open %s\n", argv[2]);
		exit(1);
	}

	filecopy(src, dst);
	fclose(src);

	if (ferror(dst)) {
		fprintf(stderr, "error writing %s\n", argv[2]);
		exit(2);
	}
	printf("file copy done!\n");

	fseek(dst, 0L, SEEK_SET);
	filecopy(dst, stdout);
	printf("\n");

	fclose(dst);
	exit(0);
}

/* filecopy:  copy file ifp to file ofp */
void filecopy(FILE *ifp, FILE *ofp)
{
	int c;

	while ((c = getc(ifp)) != EOF) {
		putc(c, ofp);
	}
}
