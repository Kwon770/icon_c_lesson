#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>

int main() {
	// mission 1
	int A, B;
	
	for (int i = 0;; i++) {
		scanf("%d %d", &A, &B);
		
		if (A == 0 || B == 0) {
			break;
		}
		
		printf("%d\n", A + B);
	}
	
	// mission 2
	int n;
	scanf("%d", &n);

	for (int i = 0; i < 10; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}

	// missino 3
	int x, y;
	int quadrant;

	scanf("%d", &x);
	scanf("%d", &y);
	
	if (x > 0 && y > 0) {
		quadrant = 1;
	}
	else if (x < 0 && y > 0) {
		quadrant = 2;
	}
	else if (x > 0 && y < 0) {
		quadrant = 3;
	}
	else if (x < 0 && y < 0) {
		quadrant = 4;
	}
	else
		printf("어떤 사분면에도 속하지 않음");

	printf("%d\n", quadrant);

	// mission 4
	int i = 0, j = 0, k = 0;
	int number;
	scanf("%d", &number);

	for (i = 0; i < number; i++)
	{
		for (k = 1; k < number - i; k++)
		{
			printf(" ");
		}
		for (j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}

	// mission 5
	int h, m;
	scanf("%d %d", &h, &m);

	if (m >= 45) {
		printf("%d %d\n", h, m - 45);
	}
	else {
		printf("%d %d\n", h - 1, m + 15);
	}
	return 0;
}