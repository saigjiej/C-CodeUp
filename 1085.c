#include <stdio.h>
// 1085 - 소리 파일 저장용량 계산하기
int main() {
	long long int h, b, c, s;
	double result;
	scanf("%lld %lld %lld %lld", &h, &b, &s, &c);
	result = h * b * s * c;
	printf("%.1fMB", result/(8 * 1024 * 1024));

	return 0;
}