#include <stdio.h>
// 1049 - �� ���� �Է¹޾� ���ϱ� 1
int main() {
	int num1, num2, result;
	scanf("%d %d", &num1, &num2);
	/*if (num1 > num2) {
		printf("1");
	}
	else if (num1 < num2) {
		printf("0");
	}*/
	result = num1 > num2;
	printf("%d", result);
	return 0;
}