#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int mission_1() {
    int a, b;

    while (1) {
        scanf("%d %d", &a, &b);

        if (a == 0 & b == 0) break;

        printf("%d\n", a + b);
    }

    return 0;
}

int mission_2() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 9; i++)
        printf("%d * %d = %d\n", n, i, n * i);

    return 0;
}

int mission_3() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x > 0) {
        if (y > 0)
            printf("1");
        else
            printf("4");
    } else {
        if (y > 0)
            printf("2");
        else
            printf("3");
    }

    return 0;
}

int mission_4() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            printf("*");
        }
    }

    return 0;
}

int mission_5() {
    int h, m;
    scanf("%d %d", &h, &m);

    if (m < 45) {
        if (h == 0)
            h = 23;
        else
            h--;

        m += 15;
    } else
        m -= 45;

    printf("%d %d", h, m);
    return 0;
}
