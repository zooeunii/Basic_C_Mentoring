#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	printf("x == y�� �����: %d\n", x == y);
	printf("x != y�� �����: %d\n", x != y);
	printf("x > y�� �����: %d\n", x > y);
	printf("x < y�� �����: %d\n", x < y);
	printf("x >= y�� �����: %d\n", x >= y);
	printf("x <= y�� �����: %d\n", x <= y);

	return 0;
}