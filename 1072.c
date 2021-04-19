#include <stdio.h>
// 1072 - 정수 입력받아 계수 출력하기
int main() {
	int n, m;
	scanf("%d", &n);
reget:
	scanf("%d", &m);
	printf("%d\n", m);
	if (n-- != 0) goto reget;
	return 0;
}