//#include <stdio.h>
///*
//	��Ʈ ������ - ��Ʈ �̵�, ��Ʈ ��
//*/
//int main()
//{
//	//��Ʈ �� ����
//	int num1 = 5;   // 00000101
//	int num2 = 10;  // 00001010
//	int result;
//
//	result = num1 & num2; //��� 1�϶��� 1
//	printf("result = %d\n", result); //00000000
//
//	result = num1 | num2; //������ �ϳ��� 1�̾ 1
//	printf("result = %d\n", result); //00001111
//	printf("---------------\n");
//
//	//��Ʈ �̵�
//	int num3 = 2;  //00000010
//	int val1, val2, val3; 
//
//	val1 = (num3 << 2); //00001000
//	printf("result = %d\n", val1);
//
//	val2 = (num3 << 1); //00000100
//	printf("result = %d\n", val2);
//
//	val3 = (num3 >> 1); //00000001
//	printf("result = %d\n", val3);
//
//	return 0;
//}