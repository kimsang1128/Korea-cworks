#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

//���� �ð� ���
int main() {
	
	
	time_t ct;//���� �ð��� �˱����� time_t ���� ����
	struct tm* now; //tm ����ü�� ��ü ����

	time(&ct);
	now = localtime(&ct); //��¥ ������.
	
	//��¥ �ð� ���
	printf("���� �⵵ : %d\n", now->tm_year + 1900);
	printf("���� �� : %d\n", now->tm_mon+1);
	printf("���� �� : %d\n", now->tm_mday);
	printf("���� ��¥ : %d��. %d��. %d��. %d�� \n", 
		now->tm_year + 1900, now->tm_mon + 1, now->tm_mday, now->tm_sec);

	printf("���� �ð� : %d ��\n", now->tm_hour);
	printf("���� �� : %d ��\n", now->tm_min);
	printf("���� �� : %d ��\n", now->tm_sec);


	//���� ���� 0-��, 1-��, 2-ȭ, 3-��, 4-��, 5-��, 6-��
	printf("���� ���� : %d\n", now->tm_wday);
		
	if (now->tm_wday == 0) {
		printf("�Ͽ���\n");
	}else if (now->tm_wday == 1) {
		printf("������\n");	
	}
	else if (now->tm_wday == 2) {
		printf("ȭ����\n");
	}
	else if (now->tm_wday == 3) {
		printf("������\n");
	}
	else if (now->tm_wday == 4) {
		printf("�����\n");
	}
	else if (now->tm_wday == 5) {
		printf("�ݿ���\n");
	}
	else if (now->tm_wday == 6) {
		printf("�����\n");
	}
	else
	



	return 0;
}