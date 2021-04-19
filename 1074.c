#include <stdio.h>
// 1074 - 정수 1개 입력받아 카운트다운 출력하기 1
int main() {
	int num= 0;
	scanf("%d", &num);
	while (num != 0) {
		printf("%d\n", num);
		num--;
	}
	return 0;
}