#include <stdio.h>
// 1068 - ���� 1�� �Է¹޾� �� ����ϱ�
int main() {
	int num;
	scanf("%d", &num);
	if (100 >= num && 90 <= num) {
		printf("%s", "A");
	}
	else if (89 >= num && 70 <= num) {
		printf("%s", "B");
	}
	else if (69 >= num && 40 <= num) {
		printf("%s", "C");
	}
	else {
		printf("%s", "D");
	}

	return 0;
}