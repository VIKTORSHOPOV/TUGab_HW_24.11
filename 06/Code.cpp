#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
	char input[100];
	printf("Enter a string: ");
	scanf_s("%s", input, sizeof(input));
	int command;
	printf("Enter a command (1 - UPPER, 0 - LOWER): ");
	scanf_s("%d", &command);
	switch (command)
	{
	case 0:
		for (int i = 0; i < strlen(input); i++)
		{
			input[i] = tolower(input[i]);
		}
		break;
	case 1:
		for (int i = 0; i < strlen(input); i++)
		{
			input[i] = toupper(input[i]);
		}
		break;
	default:
		break;
	}
	printf("%s", input);



	return 0;
}