//# include <stdio.h>
///*
//	자료형의 범위
//*/
//
//int main()
//{
//	/*
//		'A' -65(아스키코드)
//		char : -128~127(1Byte=8bit)
//		unsigned char : 0 ~ 225(부호없는 자료형)
//	*/
//	printf("=====char 자료형=====\n");
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
//	//short value3 = 128;  //short -16비트(-32768~32767)
//	printf("%d\n", value3);
//
//	/*
//		int형 4Byte = 32bit
//		-21억 ~ 21억
//		long (윈도우-4B), (맥os-8B)
//		long long - 8B
//	*/
//	printf("===== int 자료형 =====\n");
//	int iNum = 2100000000;
//	printf("%d\n", iNum);
//
//	int iNum2 = 2200000000; //범위 초과로 overflow
//	printf("%d\n", iNum2);
//
//	long long llNum = 2200000000L; //long형은 숫자뒤에 'L' or 'l'(소문자)을 넣음
//	printf("%lld\n",llNum);
//
//	/*
//		실수형 - 소숫점이 있는 수
//		float -4Byte, 소수 6자리 표기 ('F' or 'f'를 붙임)
//		double - 8Byte, 소수 15자리
//	*/
//	printf("===== float와 double자료형 =====\n");
//	float fNum = 0.1234567F; //자리수 초과로 오류
//	printf("%f\n", fNum);
//
//	double dNum = 0.123467890123456; //오류
//	printf("%.15lf\n", fNum);
//	
//
//	return 0;
//}