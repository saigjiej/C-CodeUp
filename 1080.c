#include <stdio.h>
// 1080 - 언제까지 더해야할까?
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