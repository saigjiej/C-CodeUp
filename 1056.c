#include <stdio.h>
// 1056 - 참/거짓이 서로 다를 때에만 참 출력하기
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d", (num1 && !num2) || (!num1 && num2));
	return 0;
}