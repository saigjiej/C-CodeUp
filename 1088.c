#include <stdio.h>
// 1088 - 3�� ����� ���?
int main() {
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		if (i % 3 != 0) {
			printf("%d", i);
		}
	}

	return 0;
}