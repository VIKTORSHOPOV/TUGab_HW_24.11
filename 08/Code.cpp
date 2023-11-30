#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char inputString[100];
    scanf_s("%s", inputString, sizeof(inputString)); 
    for (int i = 0; i < strlen(inputString); i++)
    {
        if (isupper(inputString[i])) {
            inputString[i] = tolower(inputString[i]);
        }
    }
    printf("%s", inputString);

    return 0;
}
