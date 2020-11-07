#include<stdio.h>

int main()
{
	int num1 = 10;
	int num2 = 20;
	int *p1 = &num1;
	int *p2 = &num2;
	int Ptr;
	
	*p1 = num1 - 1;
	*p2 = num2 - 1;
	
	printf("%d\t", *p1);
	printf("%d\n", *p2);
	
	Ptr = *p1;
	*p1 = *p2;
	*p2 = Ptr;
	
	printf("%d\t", *p1);
	printf("%d\n", *p2);
	
	return 0;
}
