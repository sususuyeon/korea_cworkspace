#include <stdio.h>
/*
x���� y ������ �հ�
1. �������
	1+2+3+4+5=15
2. calcSum2(1,5); //x > y
   calcSum2(5,1); //x < y
*/
void swap(int*, int*);
void calcSum(int x, int y);
int main()
{
	calcSum(1, 5);  //ȣ��
	calcSum(5, 1);
	return 0;
}

void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void calcSum(int x, int y)
{
	int sum, i;

	//ù��° ���� �ι�°���� Ŭ��
	if (x > y)
		swap(&x, &y);

	printf("%d", x);
	sum = x; //sum=1
	for (i = x + 1; i <= y; i++) {
		printf("+%d", i);
		sum = sum + i;
	}
	printf("=%d\n", sum); //1+2+3+4+5=15
	printf("%d���� %d������ ���� %d\n", x, y, sum);
}
