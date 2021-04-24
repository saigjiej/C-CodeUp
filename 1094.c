#include <stdio.h>
// 1094 - 이상한 출석 번호 부르기 2
int main() {
	int n, i;
	int a[1000] = {0,};
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = n; i >= 1; i--) {
		printf("%d ", a[i]);
	}

	return 0;
}