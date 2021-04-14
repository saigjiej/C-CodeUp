#include <stdio.h>
// 1066 - 정수 3개 입력받아 짝/홀 출력하기
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a % 2 == 0) {
		printf("%s\n","even");
	}
	else {
		printf("%s\n", "odd");
	}

	if (b % 2 == 0) {
		printf("%s\n", "even");
	}
	else {
		printf("%s\n", "odd");
	}

	if (c % 2 == 0) {
		printf("%s", "even");
	}
	else {
		printf("%s", "odd");
	}

	return 0;
}