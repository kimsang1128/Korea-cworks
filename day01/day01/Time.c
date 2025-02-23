#include<stdio.h>
#include<time.h>
#include<Windows.h>


//시간함수 - time()
int main_sds() {

	time_t start, end;		//time_t 자료형
	time(&start);  //시작시간

	for (int i = 1; 1 <= 10; i++)
	{
		printf("%d\n", i);
		Sleep(1000);
	}
	time(&end); // 종료시간
	printf("수행시간 : %ld초\n", (end - start));


	////ld-long decimal
	//printf("1970년 1월 1일 (0시 0분 0초)이후 %ld초\n", now);
	////일로 환산
	//printf("1970년 1월 1일 (0시 0분 0초)이후 %ld일\n", now/(24*60*60));
	////년으로 환산
	//printf("1970년 1월 1일 (0시 0분 0초)이후 %ld년\n", now / (365* 24 * 60 * 60));

	

	return 0;
}