#include <stdio.h>
// 1082 - 16���� ������?
int main() {
	int n;
	// 16����
	scanf("%X", &n);

	for (int i = 1; i <= 15; i++) {
		printf("%X * %X = %X\n", n, i, n * i);
	}

	return 0;
}