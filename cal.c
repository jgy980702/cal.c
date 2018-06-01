#include <stdio.h>


int main()
{
	int X, Y, Z;
	char blank, operation;
	again:
	printf("첫번째 값 입력:");
	scanf_s("%d", &X);
	printf("두번째 값 입력:");
	scanf_s("%d", &Y);
	printf("수식 입력");
	blank = getchar();
	operation = getchar();
	blank = getchar();
	printf("\n");
	
	if (operation == '+') {
		Z = X + Y;
	}
	else if (operation == '*') {
		Z = X * Y;
	}
	else if (operation == '/') {
		Z = X / Y;
	}
	else if (operation == '-') {
		Z = X - Y;
	}
	else
		goto again;
	printf("결과: %d", Z);
	return 0;

}