//# include <stdio.h>
///*
//	�ڷ����� ����
//*/
//
//int main()
//{
//	/*
//		'A' -65(�ƽ�Ű�ڵ�)
//		char : -128~127(1Byte=8bit)
//		unsigned char : 0 ~ 225(��ȣ���� �ڷ���)
//	*/
//	printf("=====char �ڷ���=====\n");
//	char ch = 'A'; 
//
//	printf("%c%d\n", ch,ch); 
//
//	char value1 = -128;
//	printf("%d\n", value1);
//
//	char value2 = 128;  //overflow 
//	printf("%d\n", value2);
//
//	unsigned value3 = 128;
//	//short value3 = 128;  //short -16��Ʈ(-32768~32767)
//	printf("%d\n", value3);
//
//	/*
//		int�� 4Byte = 32bit
//		-21�� ~ 21��
//		long (������-4B), (��os-8B)
//		long long - 8B
//	*/
//	printf("===== int �ڷ��� =====\n");
//	int iNum = 2100000000;
//	printf("%d\n", iNum);
//
//	int iNum2 = 2200000000; //���� �ʰ��� overflow
//	printf("%d\n", iNum2);
//
//	long long llNum = 2200000000L; //long���� ���ڵڿ� 'L' or 'l'(�ҹ���)�� ����
//	printf("%lld\n",llNum);
//
//	/*
//		�Ǽ��� - �Ҽ����� �ִ� ��
//		float -4Byte, �Ҽ� 6�ڸ� ǥ�� ('F' or 'f'�� ����)
//		double - 8Byte, �Ҽ� 15�ڸ�
//	*/
//	printf("===== float�� double�ڷ��� =====\n");
//	float fNum = 0.1234567F; //�ڸ��� �ʰ��� ����
//	printf("%f\n", fNum);
//
//	double dNum = 0.123467890123456; //����
//	printf("%.15lf\n", fNum);
//	
//
//	return 0;
//}