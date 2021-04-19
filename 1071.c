#include <stdio.h>
// 1071 - 0 입력될 때까지 무한 출력하기 1
int main() {
	int num1;
reload:
	scanf("%d", &num1);
	printf("%d\n", num1);
	if (num1 != 0) goto reload;

	return 0;
}