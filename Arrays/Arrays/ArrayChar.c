//#include<stdio.h>
//
//int main()
//{
//	//�迭�� ũ�Ⱑ 5�� ������ �迭 ���� �� ��� ����
//	//hello - > yellow�� ����
//	char msg[6] = { 'h', 'e', 'l','l','o' };
//
//	//Ư�� ��� �˻�
//	printf("%c\n ", msg[4]);
//
//	//��� ����
//	msg[0] = 'y';
//
//	//��� �߰�
//	msg[5] = 'w';
//
//	//��ü ���
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%c ", msg[i]);
//
//	}
//	printf("%\n");
//
//	//�޸� �ּ� ���(�������̹Ƿ� �����ּҰ� 1Byte�� ������)
//	printf("%x %x %x\n", &msg[0], &msg[1], &msg[2]);
//	printf("%x %x %x\n", msg, msg+1, msg+2);
//	return 0;
//}