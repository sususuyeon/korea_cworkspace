#include <stdio.h>
//#include <stdio.h> // srand(), rand()
#include <time.h>
/*
���� ������ ����
- ������ ������.
- ����ڰ� ���� �Է�
- ����ڿ� ������ ������ "�¾���", �ٸ��� "��!"�� ���
- 1,2�� �ƴ� �ٸ� ���� �Է��ϸ� ����
*/

int main()
{
	int coin;  //��ǻ���� ����
	int you;  // �����

	//���� ������
	//char aspect[][10] = {"�ո�", "�޸�"};
	char* aspect[] = { "", "�ո�", "�޸�" };  //���� ������

	//printf("%s\n", aspect[1]);
	srand(time(NULL)); //�õ尪�� ���� �ð����� �ڵ� ��ȭ

	printf("�ո��� 1, �޸���2, ����� �ٸ� ���� �Է��ϼ���\n");
	while (1) {
		coin = rand() % 2 + 1; //1~2
		printf("������ �������ϴ�. �ո�? �޸�? : ");
		scanf_s("%d", &you); //����� �Է�

		if (you < 1 || you >2) {
			printf("������ �����մϴ�.\n");
			break;
		}
		else {
			printf("�����: %s, ����:%s\n", aspect[you], aspect[coin]);
			// ���� ������ Ȱ��
			//printf("%s\n", (you == coin) ? "�¾���" : "��!");
			if (you == coin)
				printf("�¾���");
			else
				printf("��!");
		}

	}

	return 0;
}