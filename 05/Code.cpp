#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {
	char input[100];
	char search[100];


	printf("Enter a string: ");
	scanf_s("%s", input, sizeof(input));


	printf("Enter a character or string to search: ");
	scanf_s("%s", search, sizeof(search));


	if (strlen(search) == 1) {
		if (strchr(input, search[0]) != NULL) {
			printf("Character found\n");
		}
		else {
			printf("Character not found\n");
		}
	}
	else {
		if (strstr(input, search) != NULL) {
			printf("Substring found\n");
		}
		else {
			printf("Substring not found\n");
		}
	}

	return 0;
}
