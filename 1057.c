#include <stdio.h>
// 1057 - 참/거짓이 서로 다를 때만 참 출력하기
int main() {
	int num1, num2, result;
	scanf("%d %d", &num1, &num2);
	//printf("%d", (num1 == num2) || (!num1 == !num2));
	result = !(num1 ^ num2);
	printf("%d", result);

	return 0;
}