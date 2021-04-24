#include <stdio.h>
// 1082 - 16진수 구구단?
int main() {
	int n;
	// 16진수
	scanf("%X", &n);

	for (int i = 1; i <= 15; i++) {
		printf("%X * %X = %X\n", n, i, n * i);
	}

	return 0;
}