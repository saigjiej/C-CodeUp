#include <stdio.h>
// 1057 - ��/������ ���� �ٸ� ���� �� ����ϱ�
int main() {
	int num1, num2, result;
	scanf("%d %d", &num1, &num2);
	//printf("%d", (num1 == num2) || (!num1 == !num2));
	result = !(num1 ^ num2);
	printf("%d", result);

	return 0;
}