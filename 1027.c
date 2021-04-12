#include <stdio.h>
// 1027 - 년월일 입력받아 형식 바꿔 출력하기
int main() {
	int y, m, d;
	scanf("%d.%d.%d", &y, &m, &d);
	printf("%02d-%02d-%04d", d, m, y);
	return 0;
}