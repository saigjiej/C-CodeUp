#include <stdio.h>
// 주민번호 입력받아 형태 바꿔 출력하기
int main() {
	int f, l;
	scanf("%d-%d", &f, &l);
	printf("%06d-%07d", f, l);

	return 0;
}