#include<stdio.h>

int main()
{
	char a;
	double b;
	
	scanf("%c", &a);
	
	printf("%p\n", &a);
	
	scanf("%lf", &b);
	
	printf("%p\n", &b);
	
}
