#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//ù��°
	char num1;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &num1);

	printf("�ƽ�Ű�ڵ�: %d", num1);


	//�ι�°
	float num2;
	printf("������ �������� ������ �Է��Ͻÿ�: ");
	scanf("%f", &num2);
	printf("%f �������ʹ� %f���Դϴ�.", num2, num2 / 3.3058);


	//�ι� scan�ϴϱ� ù��° scan���� printf�� �ȵ˴ϴ� ��
	return 0;
}