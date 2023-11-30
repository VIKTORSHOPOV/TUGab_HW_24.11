#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string>
#include <cstring>


int main()
{
	int numCount = 0, charCount = 0, otherCount = 0;
	char input[100];
	scanf_s("%s", input, sizeof(input));
	for (int i = 0; i < strlen(input); i++)
	{
		if (isdigit(input[i]))
			numCount++;
		else if (isalpha(input[i]))
			charCount++;
		else
			otherCount++;
	}
	printf("Numbers: %d\nChars: %d\nOthers: %d", numCount, charCount, otherCount);


}