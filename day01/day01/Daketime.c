#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

//날와 시간 출력
int main() {
	
	
	time_t ct;//현재 시간을 알기위한 time_t 변수 생성
	struct tm* now; //tm 구조체의 객체 생성

	time(&ct);
	now = localtime(&ct); //날짜 포맷팅.
	
	//날짜 시간 출력
	printf("현재 년도 : %d\n", now->tm_year + 1900);
	printf("현재 월 : %d\n", now->tm_mon+1);
	printf("현재 일 : %d\n", now->tm_mday);
	printf("현재 날짜 : %d년. %d월. %d일. %d초 \n", 
		now->tm_year + 1900, now->tm_mon + 1, now->tm_mday, now->tm_sec);

	printf("현재 시간 : %d 시\n", now->tm_hour);
	printf("현재 분 : %d 분\n", now->tm_min);
	printf("현재 초 : %d 초\n", now->tm_sec);


	//현재 요일 0-일, 1-월, 2-화, 3-수, 4-목, 5-금, 6-토
	printf("현재 요일 : %d\n", now->tm_wday);
		
	if (now->tm_wday == 0) {
		printf("일요일\n");
	}else if (now->tm_wday == 1) {
		printf("월요일\n");	
	}
	else if (now->tm_wday == 2) {
		printf("화요일\n");
	}
	else if (now->tm_wday == 3) {
		printf("수요일\n");
	}
	else if (now->tm_wday == 4) {
		printf("목요일\n");
	}
	else if (now->tm_wday == 5) {
		printf("금요일\n");
	}
	else if (now->tm_wday == 6) {
		printf("토요일\n");
	}
	else
	



	return 0;
}