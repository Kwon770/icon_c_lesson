#include <stdio.h>

int mission1() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}

int mission2() {
    char c;
    float f;
    scanf("%c %f", &c, &f);
    printf("%p\n%p", &c, &f);

    return 0;
}

int mission3() {
    int num1 = 10;
    int num2 = 20;
    int* p1 = &num1;
    int* p2 = &num2;

    *p1 = *p1 - 1;
    *p2 = *p2 - 1;
    printf("%d %d\n", *p1, *p2);

    int* temp = p1;
    p1 = p2;
    p2 = temp;
    printf("%d %d\n", *p1, *p2);
}