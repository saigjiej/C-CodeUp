#include <stdio.h>
// 1078 - 짝수 합 구하기
int main() {
	// sum 초기화 꼭 하기
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