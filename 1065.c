#include <stdio.h>
// 1065 - 정수 3개 입력받아 짝수만 출력하기
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a % 2 == 0)
		printf("%d \n",a);
	if (b % 2 == 0)
		printf("%d \n",b);
	if (c % 2 == 0)
		printf("%d",c);

	return 0;
}