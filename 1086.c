#include <stdio.h>
// 1086 - �׸� ���� ����뷮 ����ϱ�
int main() {
	long long int w, h, b;
	double MB;

	scanf("%lld %lld %lld", &w, &h, &b);

	MB = (w * h * b);
	printf("%.02fMB", MB / (8 * 1024 * 1024));

	return 0;
}