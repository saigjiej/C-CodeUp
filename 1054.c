#include <stdio.h>
// 1054 - 둘 다 참일 경우만 참 출력하기
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d", num1 == 1 && num2 == 1);
	return 0;
}