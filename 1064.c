#include <stdio.h>
// 1064 - ���� 3�� �Է¹޾� ���� ���� �� ����ϱ�
int main() {
	int num1, num2, num3, result;
	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 > num2 ? num1 : num2;
	result = result > num3 ? result : num3;
	printf("%d", result);
	return 0;
}