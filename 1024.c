#include <stdio.h>
// 1024 - 단어 1개 입력받아 나누어 출력하기
int main(void) {
    int i;
    char n[21];
    scanf("%s", &n);

    for (i = 0; n[i] != '\0'; i++) {
        printf("\'%c\'\n", n[i]);
    }

    return 0;
}