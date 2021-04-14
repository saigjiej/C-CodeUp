#include <stdio.h>
// 1055 - 하나라도 참이면 참 출력하기
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d", num1 == 1 || num2 == 1);
	return 0;
}