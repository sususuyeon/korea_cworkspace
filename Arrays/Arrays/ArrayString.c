#include<stdio.h>

int main()
{
	//���ڿ� �迭 ���� �� ����
	//char fr1[5] = "apple";	//������ �ѱ��� 1Byte(�����߻�)
	char fr2[] = "apple";	//���ڿ��� ���� '\0'(NULL ����)�� ���Ե�
	char fr3[] = "�ٳ���";	//�� ���� 2Byte
	char fr4[] = { 'a','p','p','l','e', '\0' };  //'\0'-�ƽ�Ű �ڵ尪: 0

	//printf("%s\n", fr1);
	//printf("%s\n", fr2);
	//printf("%s\n", fr3);

	//���ڿ� �迭�� ũ�� - sizeof()
	//printf("%s %d\n", fr1, sizeof(fr1));
	printf("%s %d\n", fr2, sizeof(fr2));
	printf("%s %d\n", fr3, sizeof(fr3));
	printf("%s %d\n", fr4, sizeof(fr4));

	//fr2 �迭�� ũ�� 
	printf("%dByte\n", sizeof(fr2)); //6
	printf("%dByte\n", sizeof(fr2[0]));

	int size = sizeof(fr2) / sizeof(fr2[0]);
	printf("fr2 �迭�� ũ��: %d\n", size);

	//fr4�� %c�� ���
	for (int i = 0; i < size; i++)
	{
		printf("%c", fr4[i]);
	}
	return 0;
}