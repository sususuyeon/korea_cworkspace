//#include<stdio.h>
//
//int main()
//{
//	/*
//	 ���� �Է½� ���� �Է����� ���� ó��
//	*/
//	int num;
//	/*printf("���ڸ� �Է��ϼ���: ");
//	scanf_s("%d", &num);
//
//	printf("%d\n", num);*/
//
//	char ch;
//	/*printf("1���� ���� �Է�: ");
//	ch = getchar();
//	printf("�Է��� ����: %c", ch);*/
//
//	int ch2;
//	/*printf("1���� ���� �Է�: ");
//	ch2 = getchar();
//	printf("�Է��� ����: %c", ch2);*/
//
//	// ���� �Է½� ���� ó��
//	while (1)
//	{
//		printf("���ڸ� �Է��ϼ���: ");
//		int result = scanf_s("%d", &num);
//		//c��� - 1(true), 0(false)
//		if (result == 1)
//		{
//			printf("%d\n", num);
//			break;
//		}
//		else
//		{
//			// ����(�ӽñ�����) ����
//			//'\n'(����� - LF(10))
//			while (getchar() != '\n'); //'\n' �� ���ö����� ��� ���� ����
//			printf("�߸��� �Է��Դϴ�.\n");
//		}
//}
//	return 0;
//
//}