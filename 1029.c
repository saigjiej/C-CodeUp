#include <stdio.h>
// 1029 - 실수 1개 입력받아 그대로 출력하기 2
int main() {
	double d;
	scanf("%lf", &d);
	printf("%.11f", d);
	return 0;
}