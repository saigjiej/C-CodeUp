#include <stdio.h>
// 문장 1개 입력받아 그대로 출력하기
int main() {
	char data[2001]="";
	fgets(data, 2000, stdin);
	printf("%s", data);
	return 0;
}