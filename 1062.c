#include <stdio.h>
// 1062 - 비트단위로 XOR하여 출력하기
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d", num1 ^ num2);
	return 0;
}