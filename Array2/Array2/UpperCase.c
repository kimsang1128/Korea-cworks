#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#include "UpperCase.h";


void UpperCase(char data) {
	if (data >= 'a' && data <= 'z') {
		data = data - ('a' - 'A');
	}
	printf("%c", data);
}
int main() {
	char buf[] = "I am a student";

	printf("%c\n", buf[0]);
	printf("%c\n", buf[1]);
	printf("%c\n", buf[2]);


	for(int i = 0; i < strlen(buf); i++)
	{
		//printf("%c\n", buf[i]);
		UpperCase(buf[i]);
	}

	return 0;
}

