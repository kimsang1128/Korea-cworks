//#include <stdio.h>
//#include <string.h>
//int main() {
//	//������ �迭 ���� - ũ��:(4)
//	int a[4] = { 10,20,30,40 };
//	//������ ������ �迭
//	int* pa;
//
//	pa = a; //pa = &a[0]; // ������ �迭a�� �ּҸ� ����
//
//	//printf("a[0]�� ���� %d\n", a[0]);
//	//printf("a[0]�� �޸� �ּҴ� %x\n", &a[0]);
//	//printf("�迭�� �̸� a�� �� %x\n", a);
//	for (int i = 0; i < 4; i++) {
//		printf(" %d %x %x\n", pa[i], &pa[i], pa+1);
//	}
//
//	//������ - �����Ͱ� ����Ű�� ��
//	printf("������ pa�� ����Ű�� �޸𸮰� : %d\n", *pa);
//	printf("������ pa�� ����Ű�� �޸𸮰� : %d\n", *pa+1);
//	printf("������ pa�� ����Ű�� �޸𸮰� : %d\n", *(pa+1));
//
//	for (int i = 0; i < 4; i++) {
//		printf("%x�� �� %d\n", pa + i ,*(pa + i));
//	}
//
//	printf("\n-----------------------------------------------------------------\n");
//	// ���ڿ�(�迭) ������
//	char msg[] = "Good Luck";
//	char* p = msg; //msg�� �ּҸ� ����
//
//	//printf("%c\n", msg[0]);
//	//printf("%c\n", msg[1]);
//	//printf("%s\n", msg);
//
//
//	////�ڷ����� ũ�� size of
//
//	//printf("���ڿ��� ũ�� : %dByte\n", sizeof(msg));
//	//printf("���ڿ��� �������� ũ�� : %dByte\n", sizeof(p));
//
//	////�޸� �ּ�
//	//printf("���ڿ� �迭�� �ּ� : %x\n", msg); // &msg[0]
//	//printf("���ڿ� �迭�� �ּ� : %x\n", p);
//	//
//	////�ּҸ� �̿��� ���ڿ� ���
//	//printf("%s\n", p);
//	//printf("%s\n", p+1);
//	//printf("%s\n", p+2);
//	//printf("%s\n", p+3);
//	//printf("%s\n", p+4);
//
//	//for (int i = 0; i < 10; i++) {
//	//	printf("%s\n", p+i);
//	//}
//	////������ ������(*) �� ���
//	//printf("%c\n", *(p+0));
//	//printf("%c\n", *(p+1));
//	//printf("%c\n", *(p+2));
//	//printf("%c\n", *(p+3));
//	//printf("\n\n\n");
////	//printf("%d",strlen(msg));
////	for (int i=0; i < strlen(msg); i++) {
////		
////		printf("%s\n", p+i);
////	}
////	return 0;
////}