#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	char firstName[10];
	char lastName[10];
	scanf_s("%s", firstName, sizeof(firstName));
	scanf_s("%s", lastName, sizeof(lastName));
	printf("%s %s", firstName, lastName);


	return 0;
}