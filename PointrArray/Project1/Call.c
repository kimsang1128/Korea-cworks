#include <stdio.h>
void CallByValue(int n)
{
	n++;
	printf("지역 함수 내 값 변경 후 : %d\n", n);
}
int main() {
	int num = 10;
	//num++;
	CallByValue(num);//1을 더하는 함수
	printf("main 함수 내 값 변경 후 : %d\n", num);
	
	
	return 0;
}