#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
	char input[100];
	scanf_s("%s", input, sizeof(input));
	int br = 0;
	for (int i = 0; i < strlen(input); i++)
	{
		if (isdigit(input[i]))
		br++;
	}
	printf("Digits in the string: %d", br);
	return 0;
}