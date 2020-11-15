#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int mission1() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr;
    ptr = arr;

    for (int i = 0; i < 5; i++) {
        ptr[i] = ptr[i] + 2;
        printf("%d\n", ptr[i]);
    }

    return 0;
}

int mission2() {
    int size, temp, sum = 0;
    int* ptr;

    scanf("%d", &size);

    ptr = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        scanf("%d", temp);
        ptr[i] = temp;
        sum += temp;
    }

    printf("%d", sum);

    free(ptr);

    return 0;
}

int mission3() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* p;
    p = arr;

    // 2 = 5 / 2 (배열 크기에서 / 2 한 만큼만 교체하면 배열이 뒤집어짐)
    for (int i = 0; i < 2; i++) {
        int temp = p[i];
        p[i] = p[4 - i];
        p[4 - i] = temp;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d", p[i]);
    }
}