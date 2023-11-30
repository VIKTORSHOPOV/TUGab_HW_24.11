#include <stdio.h>
#include <string.h>

int main() {
	char string1[100], string2[100], string3[200];
	scanf_s("%s", string1, sizeof(string1));
	scanf_s("%s", string2, sizeof(string2));
	strcpy_s(string3, string1);
	strcat_s(string3, string2);
	printf("%s", string3);

	return 0;
}
