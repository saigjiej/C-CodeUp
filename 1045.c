#include <stdio.h>
// 1045 - 정수 2개 입력받아 자동 계산하기
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d\n", num1 + num2);
	printf("%d\n", num1 - num2);
	printf("%d\n", num1 * num2);
	printf("%d\n", num1 / num2);
	printf("%d\n", num1 % num2);
	printf("%.02f\n", (float)num1 / (float)num2);
	return 0;
}