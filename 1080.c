#include <stdio.h>
// 1080 - �������� ���ؾ��ұ�?
int main() {
	int num, sum =0, i=1;
	scanf("%d", &num);
	while (1)
	{
		sum += i;
		i++;
		if (sum >= num)
			break;
	}
	printf("%d", --i);
	return 0;
}