#include <stdio.h>
// 1076 - 문자 1개 입력받아 알파벳 출력하기
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