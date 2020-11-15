#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    // mission 1
    char input1;
    printf("문자를 입력하세요: ");
    scanf("%c", &input1);
    printf("아스키 코드: %d \n", input1);

    // mission 2
    const double unit = 3.3058;
    double input2;

    printf("면적을 제곱미터 단위로 입력하시오: ");
    scanf("%lf", &input2);
    printf("%.2lf제곱미터는 %.2lf평입니다. \n", input2, input2 / unit);

    return 0;
}