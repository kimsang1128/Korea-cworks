#define _CRT_SECURE_NO_WARNINGS //strcpy() ���� ����
#include <stdio.h>
#include <string.h>

int main() {
	char msg1[] = "Good luck";
	char msg2[20];
	int len = strlen(msg1);
	printf("���ڿ� ���� = %d\n", len);
	
	//���ڿ��� ���� - strcpy(������ ���ڿ�, ���� ���ڿ�)
	printf("%s\n", strcpy(msg2, msg1));

	return 0;
}