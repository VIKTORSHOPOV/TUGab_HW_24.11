#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
	char input[100];
	scanf_s("%s", input, sizeof(input));
	printf("Before: %s\n", input);
	for (int i = 0; i < strlen(input); i++)
	{
		if (isupper(input[i]))
			input[i] = tolower(input[i]);
		else if (islower(input[i]))
			input[i] = toupper(input[i]);
	}
	printf("After: %s", input);

	return 0;
}