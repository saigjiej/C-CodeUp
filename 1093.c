#include <stdio.h>
// 1093 - �̻��� �⼮ ��ȣ �θ��� 1
int main() {
	int n, i, t;
	int a[24] = {0,};
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &t);
		a[t] = a[t] + 1;
	}

	for (i = 1; i <= 23; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}