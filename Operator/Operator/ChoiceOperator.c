#include <stdio.h>
/* 
	���� ������
	(���ǽ�) ? �� : ����
*/
int main()
{
	int value; 
	value = (3 > 4) ? 10 : 20;
	printf("�����:%d\n", value);

	int fatherAge = 44;
	int motherAge = 46;
	char result; // 'T' /'F'�� ������ ����

	result = (fatherAge > motherAge) ? 'T' : 'F';
	printf("�����:%c\n", result);

	//���밪 ���
	int x = -5;
	int result2;

	result2 = (x < 0) ? -x : x;
	printf("�����:%d\n", result2);

	return 0;
}