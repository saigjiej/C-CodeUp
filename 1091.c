#include <stdio.h>
// 1091 - 수 나열하기 3
int main() {
	long long int a, m, d, n;
	scanf("%lld %lld %lld %lld", &a, &m, &d, &n);

	for (int i = 1; i < n; i++) {
		a *= m;
		a += d;
	}
	printf("%lld", a);
	
	return 0;
}