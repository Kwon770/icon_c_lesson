#define _CRT_SECURE_NO_WARNINGS
#define P 3.3058
#include <stdio.h>

int main_1() {
	char x;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &x);
	printf("�ƽ�Ű�ڵ� :%d", x);
	return 0;
}

int main_2() {
	float y;
	double z;
	printf("������ �������� ������ �Է��Ͻÿ� ");
	scanf("%f", &y);
	z = y / P;
	printf("%f�������ʹ� %lf���Դϴ�.", x, y);
	return 0;
}