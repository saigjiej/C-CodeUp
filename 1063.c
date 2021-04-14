#include <stdio.h>
// 1063 - 두 정수 입력받아 큰 수 출력하기
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d", num1 > num2 ? num1 : num2);
	return 0;
}