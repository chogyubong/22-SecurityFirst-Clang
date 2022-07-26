#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    printf("-> 숫자 3개를 입력해주세요\n-> " );
    scanf("%d %d %d", &a, &b, &c);
    printf("-> 세 개의 숫자 중 큰 값은 %d입니다.", ((a > b) ? a : b) > c ? ((a > b) ? a : b) : c);
    return 0;
}

