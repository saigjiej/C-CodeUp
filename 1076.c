#include <stdio.h>
// 1076 - ���� 1�� �Է¹޾� ���ĺ� ����ϱ�
int main() {
	char a = 'a', b;
	scanf("%c", &b);
	do
	{
		printf("%c ", a);
		a++;
	} while (a <= b);

	return 0;
}