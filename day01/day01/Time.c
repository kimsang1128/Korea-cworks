#include<stdio.h>
#include<time.h>
#include<Windows.h>


//�ð��Լ� - time()
int main_sds() {

	time_t start, end;		//time_t �ڷ���
	time(&start);  //���۽ð�

	for (int i = 1; 1 <= 10; i++)
	{
		printf("%d\n", i);
		Sleep(1000);
	}
	time(&end); // ����ð�
	printf("����ð� : %ld��\n", (end - start));


	////ld-long decimal
	//printf("1970�� 1�� 1�� (0�� 0�� 0��)���� %ld��\n", now);
	////�Ϸ� ȯ��
	//printf("1970�� 1�� 1�� (0�� 0�� 0��)���� %ld��\n", now/(24*60*60));
	////������ ȯ��
	//printf("1970�� 1�� 1�� (0�� 0�� 0��)���� %ld��\n", now / (365* 24 * 60 * 60));

	

	return 0;
}