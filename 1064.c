#include <stdio.h>
// 1064 - 정수 3개 입력받아 가장 작은 수 출력하기
int main() {
	int num1, num2, num3, result;
	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 > num2 ? num1 : num2;
	result = result > num3 ? result : num3;
	printf("%d", result);
	return 0;
}