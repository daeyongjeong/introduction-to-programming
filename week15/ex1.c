#include <stdio.h>

void reverse_english(char name[]);
void reverse_hangul(char name[]);

int main(void)
{
	char name[20];
	unsigned char uc;

	printf("\n입력 후 Enter: ");
	scanf("%s", name);
	uc = name[0];

	if (uc <= 122) {	/* same as ((uc & 0x80) == 0); ASCII char */
		printf("reverse English: ");
		reverse_english(name);
	} else {
		printf("한글 역순: ");
		reverse_hangul(name);
	}
	printf("\n\n");
	return 0;
}

/* reverse_english:  print reversed string of English, read 1 byte */
void reverse_english(char name[])
{
	if (*name != '\0') {
		reverse_english(name + 1);
		printf("%c", *name);
	}
}

/* reverse_hangul:  print reversed string of Korean, read 2 bytes */
void reverse_hangul(char name[])
{
	if (*name != '\0') {
		reverse_hangul(name + 2);
		printf("%c%c", *name, *(name + 1));
	}
}
