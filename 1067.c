#include <stdio.h>
// 1067 - ���� 1�� �Է¹޾� �м��ϱ�
int main() {
	int num;
	scanf("%d", &num);
	if (num < 0) { // ����
		printf("%s\n", "minus");
		if (num % 2 == 0) {
			printf("%s\n", "even");
		}
		else {
			printf("%s\n", "odd");
		}
	}
	else { // ���
		printf("%s\n", "plus");
		if (num % 2 == 0) {
			printf("%s", "even");
		}
		else {
			printf("%s", "odd");
		}
	}

	return 0;
}