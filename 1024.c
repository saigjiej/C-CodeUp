#include <stdio.h>
// 1024 - �ܾ� 1�� �Է¹޾� ������ ����ϱ�
int main(void) {
    int i;
    char n[21];
    scanf("%s", &n);

    for (i = 0; n[i] != '\0'; i++) {
        printf("\'%c\'\n", n[i]);
    }

    return 0;
}