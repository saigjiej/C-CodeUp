#include <stdio.h>
// 1027 - ����� �Է¹޾� ���� �ٲ� ����ϱ�
int main() {
	int y, m, d;
	scanf("%d.%d.%d", &y, &m, &d);
	printf("%02d-%02d-%04d", d, m, y);
	return 0;
}