#include <stdio.h>
// 1087 - 여기까지! 이제 그만~
int main() {
	int num, sum=0;
	scanf("%d", &num);

	for (int i = 1; ; i++) {
		sum += i;
		if (sum > num) {
			break;
		}
	}
	printf("%d", sum);

	return 0;
}