#include <stdio.h>
// 1045 - ���� 2�� �Է¹޾� �ڵ� ����ϱ�
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d\n", num1 + num2);
	printf("%d\n", num1 - num2);
	printf("%d\n", num1 * num2);
	printf("%d\n", num1 / num2);
	printf("%d\n", num1 % num2);
	printf("%.02f\n", (float)num1 / (float)num2);
	return 0;
}