#include <stdio.h>
// 1019 - 연월일 입력받아 그대로 출력하기
int main() {
	int y, m, d;
	scanf("%d.%d.%d", &y, &m, &d);
	printf("%d.%02d.%02d", y, m, d);
	return 0;
}