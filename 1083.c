#include <stdio.h>
// 1083 - 3 6 9 ������ ���� ����!
int main() {
	int num, i;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (i % 3 == 0) 
			printf("X ");
		else
			printf("%d ", i);
		
	}

	return 0;
}