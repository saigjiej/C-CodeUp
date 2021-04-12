#include <stdio.h>
// 1044 - 정수 1개 입력받아 1 더해 출력하기
int main() {
	long long num;
	scanf("%lld", &num);
	printf("%lld", ++num);
	return 0;
}