#include <stdio.h>

typedef struct {
	int no;
	char name[20];
	int age;
}Hero;

int main()
{
	//����ü ���� ����
	Hero hero1 = { 1, "����", 39 };

	//����ü ������(����) ����
	//���� �Ҵ�

	//���� ���
	printf("%d %S %d\n", hero1.no, hero1.name, hero1.age);

	return 0;
}