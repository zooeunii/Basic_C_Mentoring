// 반복을 이용한 팩토리얼 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;
	long fact = 1;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	for (i = 1;i <= n;i++)
		fact *= i;

	printf("%d!은 %d입니다.", n, fact);

	return 0;
}