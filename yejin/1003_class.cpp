#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//���빮��

	// medium

	char c;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &c);

	printf("�ƽ�Ű�ڵ� : %d\n", c);





	// hard

	float area;
	printf("������ �������� ������ �Է��Ͻÿ�: ");
	scanf("%f", &area);

	float result = area / 3.3058;

	printf("%.2f�������ʹ� %.2f���Դϴ�.", area, result);

	return 0;


}