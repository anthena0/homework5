#include <stdio.h>


void stringReverse(char *str);

int main() {
	char myString[] = "Hello, World!";


	stringReverse(myString);

	return 0;
}

void stringReverse(char *str) {

	if (*str == '\0') {
		return;
	}


	stringReverse(str + 1);
	printf("%c", *str);
}
