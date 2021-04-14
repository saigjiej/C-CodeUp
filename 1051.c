#include <stdio.h>
// 1051 - 두 정수 입력받아 비교하기 3
int main() {
	int num1, num2, result;
	scanf("%d %d", &num1, &num2);
	result = num1 <= num2;
	printf("%d", result);
	return 0;
}