#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
# include <ctype.h>

int main() {

	// mission 1

	char s1[10] = "world";
	char s2[20] = "Hello";

	strcat(s2, s1);

	printf("%s\n", s2);

	return 0;
}

int solution1() {
	// mission 2
	char str[100];
	int count = 0; int i = 0;

	printf("���� �Է�:");

	scanf("%[^\n]s", str);
	if (!isspace(str[0])) count++;
	for (i; i < strlen(str) - 1; i++) {
		if (isspace(str[i]) && !isspace(str[i + 1]))
			count++;
	}
	printf("%d\n", count);
	return 0;
}

int count(char* c, char x) {
	char a[100] = { 0 };
	int ch, w;
	printf("���ڿ� �Է�: ");
	scanf("%c", &a);
	printf("������ �� ���ڸ� �Է�: ");
	scanf("%c", &ch);
	w = count(a, ch);
	printf("%c�� ���� : %d\n", ch, w);
	return 0;

}
int count(char* c, char x) {
	int i, count;
	count = 0;
	for (i = 0; c[i] != NULL; i++) {
		if (c[i] == x)
			count++;
		else
			continue;
	}
	return count;
}