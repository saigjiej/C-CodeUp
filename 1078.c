#include <stdio.h>
// 1078 - ¦�� �� ���ϱ�
int main() {
	// sum �ʱ�ȭ �� �ϱ�
	int num, sum = 0; 
	scanf("%d", &num);
	for (int i = 0; i <= num; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
		
	}
	printf("%d", sum);

	return 0;
}