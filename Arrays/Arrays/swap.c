#include <stdio.h>
//����� �Ű����� �ڷ����� ��� ����
void callByVal(int, int);  
void callByRef(int*, int*);
int main()
{
	int x = 1, y = 2;
	int temp;

	printf("���� ���� ȣ��");
	callByVal(x, y);
	printf("x =%d, y =%d\n", x, y);
	
	printf("������ ���� ȣ��");
	callByRef(&x, &y);
	printf("x =%d, y =%d\n", x, y);
	return 0;
}

void callByVal(int a, int b)
{
	int temp;
	//��ȯ
	temp = a;
	a = b;
	b = temp;

}

void callByRef(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}