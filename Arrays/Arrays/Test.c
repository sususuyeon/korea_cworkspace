#include <stdio.h>

int main()
{
	int a = 10;
	int* b;

	printf("a�� ���� %d\n", a);  //10

	b = &a;
	*b = 20;

	printf("b ���� %d\n", *b);  //20
	printf("a�� ���� %d\n", a);  //20

	return 0;
}