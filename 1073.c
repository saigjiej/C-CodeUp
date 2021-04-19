#include <stdio.h>
// 1073 - 0 입력될 때까지 무한 출력하기 2
int main() {
	int num = 1;
	
	while (num != 0) 
	{
		scanf("%d", &num);
		if (num != 0) {
			printf("%d\n", num);
		}
	}
		
	return 0;
}