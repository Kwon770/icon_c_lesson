#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//�̼�1 : ���ڸ� �Է��Ͻÿ�: �� �Է��ϸ� �ش��ϴ� �ƽ�ī�� ����
	char c;
	printf("���ڸ� �Է��Ͻÿ� : ");

	scanf("%c", &c);

	printf("�ƽ�ī�ڵ� : %d\n", c);


	//�̼�2 : ������ �������� ������ �Է��ϸ� �������� ������ �ϴ� ��
	float a;
	printf("������ �������� ������ �Է��Ͻÿ� : ");
	
	scanf("%f", &a);

	float result = a / 3.3058;

	printf("%.2f�������ʹ� %.2f���Դϴ�", a, result);

	return 0;
}