#include <stdio.h>
// 1075 - 정수 1개 입력받아 카운트다운 출력하기 2
int main() {
	int num;
	scanf("%d", &num);
	while (num != 0) {
		--num;
		printf("%d\n", num);
	}
	return 0;
}