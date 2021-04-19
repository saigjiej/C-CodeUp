#include <stdio.h>
// 1077 - 정수 1개 입력받아 그 수까지 출력하기
int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i <= num; i++) {
		printf("%d\n", i);
	}

	return 0;
}