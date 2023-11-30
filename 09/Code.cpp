#include <stdio.h>
#include <ctype.h>

int main() {
	char inputString[100];
	scanf_s("%s", inputString, sizeof(inputString));
	for (int i = 0; inputString[i] != '\0'; i++) {
		if (i == 0) {
			inputString[i] = toupper(inputString[i]);
		}
		else {
			inputString[i] = tolower(inputString[i]);
		}
	}
	printf("%s", inputString);

	return 0;
}
