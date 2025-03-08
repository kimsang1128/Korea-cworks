//#include <stdio.h>
//#include <string.h>
//int main() {
//	//정수형 배열 선언 - 크기:(4)
//	int a[4] = { 10,20,30,40 };
//	//정수형 포인터 배열
//	int* pa;
//
//	pa = a; //pa = &a[0]; // 정수형 배열a의 주소를 저장
//
//	//printf("a[0]의 값은 %d\n", a[0]);
//	//printf("a[0]의 메모리 주소는 %x\n", &a[0]);
//	//printf("배열의 이름 a의 값 %x\n", a);
//	for (int i = 0; i < 4; i++) {
//		printf(" %d %x %x\n", pa[i], &pa[i], pa+1);
//	}
//
//	//역참조 - 포인터가 가리키는 값
//	printf("포인터 pa가 가리키는 메모리값 : %d\n", *pa);
//	printf("포인터 pa가 가리키는 메모리값 : %d\n", *pa+1);
//	printf("포인터 pa가 가리키는 메모리값 : %d\n", *(pa+1));
//
//	for (int i = 0; i < 4; i++) {
//		printf("%x의 값 %d\n", pa + i ,*(pa + i));
//	}
//
//	printf("\n-----------------------------------------------------------------\n");
//	// 문자열(배열) 포인터
//	char msg[] = "Good Luck";
//	char* p = msg; //msg의 주소를 저장
//
//	//printf("%c\n", msg[0]);
//	//printf("%c\n", msg[1]);
//	//printf("%s\n", msg);
//
//
//	////자료형의 크기 size of
//
//	//printf("문자열의 크기 : %dByte\n", sizeof(msg));
//	//printf("문자열의 포인터의 크기 : %dByte\n", sizeof(p));
//
//	////메모리 주소
//	//printf("문자열 배열의 주소 : %x\n", msg); // &msg[0]
//	//printf("문자열 배열의 주소 : %x\n", p);
//	//
//	////주소를 이용한 문자열 출력
//	//printf("%s\n", p);
//	//printf("%s\n", p+1);
//	//printf("%s\n", p+2);
//	//printf("%s\n", p+3);
//	//printf("%s\n", p+4);
//
//	//for (int i = 0; i < 10; i++) {
//	//	printf("%s\n", p+i);
//	//}
//	////포인터 역참조(*) 값 출력
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