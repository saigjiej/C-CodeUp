#include <stdio.h>
// 1070 - 월 입력받아 계절 출력하기
int main() {
	int m;
	scanf("%d", &m);
	switch (m)
	{
	case 1:
	case 2:
	case 12:
		printf("%s", "winter");
		break;
	case 3:
	case 4:
	case 5:
		printf("%s", "spring");
		break;
	case 6:
	case 7:
	case 8:
		printf("%s", "summer");
		break;
	case 9:
	case 10:
	case 11:
		printf("%s", "fall");
		break;
	default:
		break;
	}

	return 0;
}