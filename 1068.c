#include <stdio.h>
// 1068 - 정수 1개 입력받아 평가 출력하기
int main() {
	int num;
	scanf("%d", &num);
	if (100 >= num && 90 <= num) {
		printf("%s", "A");
	}
	else if (89 >= num && 70 <= num) {
		printf("%s", "B");
	}
	else if (69 >= num && 40 <= num) {
		printf("%s", "C");
	}
	else {
		printf("%s", "D");
	}

	return 0;
}