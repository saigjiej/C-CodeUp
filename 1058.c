#include <stdio.h>
// 1058 - 둘 다 거짓일 경우만 참 출력하기
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d", num1 == 0 && num2 == 0);
	return 0;
}