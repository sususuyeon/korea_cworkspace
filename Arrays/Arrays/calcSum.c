#include <stdio.h>

/*
����: �޸��� �Ҵ�� ������ ���� ����
������: �޸��� �Ҵ�� ������ �ּҸ� ����- &
*/
void calcSum(x, y);
int main()

{
	//x���� y���� ���ϱ�

	calcSum(1, 5);
	calcSum(2, 5);
	
	/*
	int x = 10;
	int* ptr = &x;

	//%p, %x -> �ּҿ� �����ϴ� ���� ��ȣ
	printf("%d %p\n", x, &x);
	printf("%d %p\n", *ptr, ptr); //�������� ���� ����(*ptr)

	*/

	return 0;
}
void calcSum(x,y)
{
	int i;
	int sum = 0;

	for (i = x; i <= y; i++)
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
}