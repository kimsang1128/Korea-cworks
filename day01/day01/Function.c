#include<stdio.h>

int main_duckjin() {

	int year = 2025; // ������ ����
	char place = 'B'; // �� ���� ����

	// ���ڿ�(�迭) ����, ����-1��, �ѱ�-2��
	//('j', 'e', 'r', 'r', 'y', '\0') NULL����(���鹮��)
	char name[] = "jerry"; 

	printf("%d �� �Դϴ�.\n", year);
	printf("%c �������Դϴ�. \n", place);
	printf("�̸� : %s\n", name);
	printf("�Լ��� �н��մϴ�.\n");

	//sizeof() �Լ� - ������ ũ��(����)
	printf("�迭�� ũ�� : %d\n", sizeof(name));

	return 0;
} 