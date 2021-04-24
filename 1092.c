#include <stdio.h>
// 1092 - 함께 문제 푸는 날
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int day = 1;
	while (day % a != 0 || day % b != 0 || day % c != 0) {
		day++;
	}
	printf("%d", day);

	return 0;
}