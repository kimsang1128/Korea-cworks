#include<stdio.h>
#include<math.h>

int main_duckjin2() {

	

	//�ݿø� - round() %f �Ǽ� ��������. %lf(long float)
	printf("%.2lf\n", round(2.54));
	printf("%.2lf\n", round(2.14));
	
	//����(����) - floor()
	printf("%.2lf\n", floor(2.54));
	
	//���밪 - abs()
	printf("%d\n", abs(8));
	printf("%d\n", abs(-8));

	return 0;
}