#define _CRT_SECURE_NO_WARNINGS //scanf() ���� ���� ����
#include<stdio.h>

int main()
{
	//ȸ���� ���� �Է�- ���̵�, �н�����, �̸�, ������, Ű
	char id[20], password[256], name[30];
	float weight, height;

	printf("\n===== ȸ�� ���� �Է� =====\n");
	printf("���̵� �Է�: ");
	//scanf("%s", &id);	//�迭�� �ּҿ�����(&) ������� ����
	//sizwof(id) - �Է�ũ�⸦ �����ؼ� ���� �����÷ο� ����
	scanf_s("%s", id, sizeof(id));	

	printf("�н����� �Է�: ");
	scanf_s("%s", password, sizeof(password));

	printf("�̸� �Է�: ");
	scanf_s("%s", name, sizeof(name));

	printf("������ �Է�: ");
	scanf_s("%f", &weight);

	printf("Ű �Է�: ");
	scanf_s("%f", &height);

	//ȸ�� ���� ���
	printf("\n===== ȸ�� ���� ���=====\n");
	printf("���̵�: %s\n", id);
	printf("�н�����: %s\n", password);
	printf("�̸�: %s\n", name);
	printf("������: %3.1f\n", weight);
	printf("Ű: %.1f\n", height);

	return 0;
}