#include<stdio.h>

int main()
{
	/*
	 ���� �Է½� ���� �Է����� ���� ó��
	*/
	int num;
	/*printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &num);

	printf("%d\n", num);*/

	char ch;
	/*printf("1���� ���� �Է�: ");
	ch = getchar();
	printf("�Է��� ����: %c", ch);*/

	int ch2;
	/*printf("1���� ���� �Է�: ");
	ch2 = getchar();
	printf("�Է��� ����: %c", ch2);*/

	// ���� �Է½� ���� ó��
	while (1)
	{
		printf("���ڸ� �Է��ϼ���: ");
		if (scanf_s("%d", &num) == 1)
		{
			printf("%d\n", num);
			break;
		}

	while (getchar() != '\n'); //'\n' �� ���ö����� ��� ���� ����
	printf("�߸��� �Է��Դϴ�.\n");
}
	return 0;

}