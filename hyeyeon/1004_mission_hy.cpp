#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//misson 1

int solve2() {

	int A;
	int B;

	scanf("%d", &A);
	scanf("%d", &B);

	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d\n", A % B);

	return 0;
}

//mission 2

int solve() {

	int A;
	int B;
	int C;

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	printf("%d\n%d\n", (A + B) % C, ((A % C) + (B % C)) % C);
	printf("%d\n%d\n", (A*B) % C, ((A % C) * (B % C)) % C);

	return 0;
}

//mission 3

int main() {
	
	int A;
	int B;

	scanf("%d", &A);
	scanf("%d", &B);

	printf("%d\n", A * (B % 10));    //B�� 10���� ���� ���� ������ =B%10
	printf("%d\n", A * (B / 10 % 10));   //B�� 10���� ���� ���� �ٽ� 10���� ���� ���� ������ = B/10%10 
	printf("%d\n", A * (B / 100));    //B�� 100���� ���� ��
	printf("%d\n", A * B);
	return 0;

}