#include<stdio.h>

int main_duckjin() {

	int year = 2025; // 정수형 변수
	char place = 'B'; // 한 개의 문자

	// 문자열(배열) 변수, 영어-1지, 한글-2자
	//('j', 'e', 'r', 'r', 'y', '\0') NULL문자(공백문자)
	char name[] = "jerry"; 

	printf("%d 년 입니다.\n", year);
	printf("%c 강의장입니다. \n", place);
	printf("이름 : %s\n", name);
	printf("함수를 학습합니다.\n");

	//sizeof() 함수 - 글자의 크기(개수)
	printf("배열의 크기 : %d\n", sizeof(name));

	return 0;
} 