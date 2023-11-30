#include <stdio.h>
#include <string.h>

int main() {
	char inputString[100];
	scanf_s("%s", inputString, sizeof(inputString));
	int length = strlen(inputString);
	printf("Lenght: %d\n", length);
	int countA = 0;
	for (int i = 0; i < length; i++) {
		if (inputString[i] == 'a') {
			countA++;
		}
	}
	printf("Count of 'a': %d\n", countA);
	for (int i = 0; i < length; i++) {
		if (inputString[i] == 'a') {
			inputString[i] = 'A';
		}
	}
	printf("%s\n", inputString);

	return 0;
}
