#include <stdio.h>
// 정수 1개 입력받아 나누어 출력하기
int main() {
	int a,b,c,d,e;
	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]", a*10000, b*1000, c*100, d*10, e);
	return 0;
}