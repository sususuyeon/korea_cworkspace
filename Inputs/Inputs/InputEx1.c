//#define _CRT_SECURE_NO_WARNINGS //scanf() ����ó��
#include <stdio.h>
/*
	�Է�ó��
	scanf(�Է�����, ���������� ����)
	scanf_s(�Է�����, ���������� ����)
	& - �����տ� �ּ� �����ڸ� �տ� ����
*/
int main()
{
	int iNum;
	float fNum;

	printf("���� �Է�:");
	scanf_s("%d", &iNum);

	printf("�Ǽ��Է�:");
	scanf_S("%f", &fNum);

	printf("�Էµ� ����:%d\n", iNum);
	printf("�Էµ� ������ �ּ� :%x\n", &iNum);

	printf("�Էµ� �Ǽ�:%f\n", fNum);
	printf("�Էµ� �Ǽ��� �ּ� :%x\n", &fNum);

	return 0;
}