#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	char c1;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &c1);
	printf("%c\n", c1);

	return 0;
}

int solve() {
	const float con1 = 3.3058;
	float con2;
	printf("������ �������� ������ �Է��Ͻÿ�: ");
	scanf("%d", &con2);
	float con3 = con2 / con1;
	printf("%d", con3);
	
}