//#define _ CRT_SECURE_NOWARNINGS 
#include <stdio.h>
/*
����ü - �������� �ڷ����� �׷�ȭ�� �ڷ���(���� �ڷ���)
*/
struct Person {
	char name[20];	//�̸�
	int age;		//����
	float height;	//Ű
};

int main()
{
	/*
	// ����ü�� ���� ����
	// ���� ���1
	//struct Person p1 = {"������", 26, 175.8f};

	// ������2
	struct Person p1;
	//p1.name = "������";
	strcpy_s(p1.name,sizeof(p1.name), "������");	//sizeof(p1.name) - �����÷ο� ����
	P1.age = 26;
	P1.height = 175.9f;
	 
	//��������� �����Ҷ� ��(.) ������ ���
	printf("�̸� : %s\n", p1.name);
	printf("���� : %d\n", p1.age);
	printf("Ű : %.1f\n", p1.height);
	*/

	//����ü �迭
	struct Person p[3] = {
		{"�̻�", 15, 171.9f},
		{"�Ѱ�", 35, 163.3f},
		{"�ں�", 22, 178.4f}
	};
	int i;

	//p[0]�� ����
	printf("�̸� : %s\n", p[0].name);
	printf("���� : %d\n", p[0].age);
	printf("Ű : %.1f\n", p[0].height);

	// ��ü ���
	for (i = 0; i < 3; i++)
	{
		printf("�̸�: %s, ����: %d, Ű: %.1f\n",
			p[i].name, p[i].age, p[i].age, p[i].height);
	}
	return 0;
}
 