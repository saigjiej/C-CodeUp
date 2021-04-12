#include <stdio.h>
// 1047 - 정수 1개 입력받아 2배 곱해 출력하기
int main() {
	int num;
	scanf("%d", &num);
	// printf("%d", num * 2);
	printf("%d", num << 1);
	return 0;
}