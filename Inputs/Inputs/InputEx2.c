#include <stdio.h>
#define RATE_KPH_MPH 1.6093 //��ȯ ���

/*
	KPH(ų�ι���)�� MPH(����)�� ��ȯ 
*/
int main()
{
	int kph;  // kilometer per hour
	double mph;  //mile per hour

	printf("����� ������ �Է��ϼ���[KPH]:");
	scanf_s("%d", &kph);

	//��ȯ : ų�ι��� / ��ȯ���
	mph = kph / RATE_KPH_MPH;

	printf("����� ������%.21f[MPH]�Դϴ�.\n", mph);

	return 0;
}