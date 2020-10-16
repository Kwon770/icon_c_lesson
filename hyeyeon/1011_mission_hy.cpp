#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//mission1

int main() {
	int a, b;

	while (1) {

		scanf("%d%d", &a, &b);

		if (a != 0 || b != 0)
			printf("%d\n", a + b);
		else
			break;
	}
	return 0;
}

//mission 2

int solve() {
	int N;

	scanf("%d", &N);

	for (int i = 1; i < 10; i++)
		printf("%d * %d = %d\n", N, i, N * i);

	return 0;
}

//mission 3

int solve1() {
	int x, y;
	int quadrant;

	scanf("%d", &x);
	scanf("%d", &y);

	if (x > 0) {
		if (y > 0)
			quadrant = 1;
		else
			quadrant = 4;
	}
	else {
		if (y > 0)
			quadrant = 2;
		else
			quadrant = 3;
	}

	printf("%d", quadrant);

	return 0;
}

//mission 4
