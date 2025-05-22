#include <stdio.h>

/*
	- ��ø ����ü ������ Ȱ��
	- �л� ����ü�� ���� ����ü �ڷ����� ����
*/
// ���� ����ü ����
typedef struct {
	int math;	// �������� 
	int eng;	// ��������
	double avg;	//���
}Score;

typedef struct {
	int number;    //�й�
	char name[20]; //�̸�
	Score score; //���� ����ü ���� 
} Student;

//������ ��� ���
void calcAvg(Score* score) { //������ ����ü�� �ʼ������� ������
	score->avg = (score->math + score->eng) / 2.0; //�Ǽ������� �ڵ��� ��ȯ
}

//�л��� ���� ���
void showInfo(Student* s) {

	printf("�й�: %d, �̸�: %s\n", s->number, s->name);
	printf("����: %d, ����: %d\n", s->score.math, s->score.eng);
	printf("���: %.1lf\n", s->score.avg);
}


int main()
{	
	//����ü ���� ����
	Student st1 = {
		.number = 101,
		.name = "�ӽ���",
		.score = {95, 88, 0.0}
	};

	Student st2 = {
		.number = 102,
		.name = "������",
		.score = {80, 85, 0.0}
	};

	//������ ���(�ݵ�� �ּҷ� ����)
	calcAvg(&st1.score); 
	calcAvg(&st2.score); 

//�л��� ���� ���
//ȣ��(�Ű������� ����ü �����͸� ����)
// ������(8byte)�� ����ϸ� �Ű������� ����� �뷮�� �����
	showInfo(&st1);
	showInfo(&st2);

	return 0;
}