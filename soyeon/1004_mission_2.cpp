#define _CTR_SECURE_NO_WATNINGS

#include <stdio.h>
#include <limits.h>

int main() {
	float a;
	float b;

	printf("������ �������� ������ �Է��Ͻÿ�:");
	scanf("%f", &a);

	b = a / 3.3058;
	printf("%.2f�������ʹ� %.2f���Դϴ�.", a, b);

	return 0;
}