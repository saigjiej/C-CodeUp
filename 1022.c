#include <stdio.h>
// 1022 - ���� 1�� �Է¹޾� �״�� ����ϱ�
int main() {
	char data[2001]="";
	fgets(data, 2000, stdin);
	printf("%s", data);
	return 0;
}