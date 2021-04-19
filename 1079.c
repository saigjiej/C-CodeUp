#include <stdio.h>
// 1079 - 원하는 문자가 입력될 때까지 반복 출력하기
int main() {
	char c;
	do
	{
		scanf("%c", &c);
		printf("%c", c);
	} while (c != 'q');
	return 0;
}