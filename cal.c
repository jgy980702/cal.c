#include <stdio.h>


int main()
{
	int X, Y, Z;
	char blank, operation;
	again:
	printf("ù��° �� �Է�:");
	scanf_s("%d", &X);
	printf("�ι�° �� �Է�:");
	scanf_s("%d", &Y);
	printf("���� �Է�");
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
	printf("���: %d", Z);
	return 0;

}