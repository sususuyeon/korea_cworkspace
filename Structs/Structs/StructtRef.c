#include <stdio.h>
/*
��ø ����ü
	-����ü�� ��� ������ �ٸ� ����ü�� �ڷ����� ���
	-�ϳ��� ����ü�� �ٸ� ����ü�� ������ ���
*/
struct point {
	int x;
	int y;
};

struct Rectangle {
	struct point p1;
	struct point p2;
};
int main()
{
	/*
		�� ���� �̿��� ���簢�� �����
		���� ��� ��ǥ, ���� �ϴ� ��ǥ
	*/
	//���1
	/*struct Rectangle rect;
	rect.p1.x = 1;
	rect.p1.y = 5;

	rect.p2.x = 4;
	rect.p2.y = 2;

	//���
	printf("��1(%d, %d),��2(%d, %d)\n",
		rect.p1.x, rect.p1.y, rect.p2.x, rect.p2.y);*/

	//���2
	struct Rectangle rect = {
		.p1 = {1,5},
		.p2 = {5,2}
	};
	int width, height;
	//�ʺ�� ���� ���
	width = abs(rect.p2.x - rect.p1.x);
	height = abs(rect.p2.y - rect.p1.y);

	printf("�ʺ�: %d, ����: %d\n", width, height);

	return 0;
}
