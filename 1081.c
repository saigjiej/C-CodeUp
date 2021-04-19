#include <stdio.h>
// 1081 - 주사위를 2개 던지면?
int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			printf("%d %d\n", i, j);
		}
	}
	
	return 0;
}