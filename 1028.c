#include <stdio.h>
// 1028 - 정수 1개 입력받아 그대로 출력하기 2
int main() {
	int n;
	scanf("%u", &n);
	printf("%u", n); // %u가 아닐 시 음수로 출력
	return 0;
}