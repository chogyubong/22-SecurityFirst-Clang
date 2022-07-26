#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int input;
	printf("숫자를 입력하세요 -> ");
	scanf("%d", &input);
	printf("8진수 : %o\n", input);
	printf("16진수 : %#x\n", input);
}
