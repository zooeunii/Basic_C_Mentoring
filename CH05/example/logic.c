#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	printf("%d && %d�� �����: %d\n", x, y, x && y);
	printf("%d || %d�� �����: %d\n", x, y, x || y);
	printf("!%d�� �����: %d\n", x, !x);

	return 0;
}