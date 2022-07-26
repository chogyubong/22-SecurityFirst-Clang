#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("숫자를 입력하세요 -> ");
	scanf("%d", &num);
	printf("8진수 : %o\n", num);
	printf("16진수 : %#x\n", num);
}
