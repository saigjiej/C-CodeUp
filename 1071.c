#include <stdio.h>
// 1071 - 0 �Էµ� ������ ���� ����ϱ� 1
int main() {
	int num1;
replay:
	scanf("%d", &num1);

	if (num1 != 0) {
		pritnf("%d\n", num1);
		goto replay;
	}

	return 0;
}