#include <stdio.h>
// 1090 - 수 나열하기 2
int main() {
	long long int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);

	for (int i = 1; i < c; i++) {
		a *= b;
	}
	printf("%lld", a);

	return 0;
}