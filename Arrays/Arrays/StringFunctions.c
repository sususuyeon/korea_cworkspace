#define _CRT_SECURE_NO_WARNINGS //strcpy(���ȿ���)
#include <stdio.h>
#include <string.h> //strcpy(), strlen(), strcmp()
 

/*
	���ڿ� ����- strcpy()
	���ڿ��� ���� -strlen()
	���ڿ� �� - 
*/
int main()
{
	char msg1[] = "Good Luck";
	char msg2[20];
	char msg3[30];

	printf("%d\n", strlen(msg1));	//���ڿ��� ���� - 9
	printf("%d\n", sizeof(msg1));	//�޸��� ũ��(�뷮) 10 - '\0'(NUL)

	//���ڿ� ����
	strcpy(msg2, msg1);
	printf("%s\n", msg2);

	strcpy(msg3, "Have a good time!");
	printf("%s\n", msg3);

	//���ڿ� ��
	char greet1[] = "hello";
	char greet2[] = "Hello";
	int result;

	result = strcmp(greet1, greet2);
	printf("%d\n", result);	//0 - ��ġ, 1- ����ġ

	if (result == 0)
	{
		printf("���ڿ��� ��ġ�մϴ�.\n");
	}
	else
	{
		printf("���ڿ��� ��ġ���� �ʽ��ϴ�.\n");
	}

	return 0;
}