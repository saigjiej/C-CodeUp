#include <stdio.h>
// 1067 - 정수 1개 입력받아 분석하기
int main() {
	int num;
	scanf("%d", &num);
	if (num < 0) { // 음수
		printf("%s\n", "minus");
		if (num % 2 == 0) {
			printf("%s\n", "even");
		}
		else {
			printf("%s\n", "odd");
		}
	}
	else { // 양수
		printf("%s\n", "plus");
		if (num % 2 == 0) {
			printf("%s", "even");
		}
		else {
			printf("%s", "odd");
		}
	}

	return 0;
}