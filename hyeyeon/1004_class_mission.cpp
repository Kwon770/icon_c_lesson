#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c1;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &c1);

	printf("%d \n", c1);

	float c2;
	printf("������ �������� ������ �Է��Ͻÿ�: ");
	scanf("%f", &c2);

	float result = c2 / 3.3058;

	printf("%.2f�������ʹ� %.2f���Դϴ�.", c2, result);

	return 0;
}