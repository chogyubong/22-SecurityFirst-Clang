#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int birth;
    int year, month, day;

    printf("-> 생년월일을 입력해주세요 ex) 961106\n");
    printf("00년생 이전 사람은 19xx년도 00년생부터는 20xx년도\n-> ");
    scanf("%d", &birth);

    year = (birth / 10000);
    month = (birth % 10000 / 100);
    day = (birth % 10000 % 100);

    year > 22 ? printf("19%d년도 %월 %일에 태어나셨군요!", year, month, day) : printf("20%02d년도 %d월 %d일에 태어나셨군요!", year, month, day);

    return 0;   
}
